//
// Created by Felipe Viana on 2025-08-22.
//

/*  Consider the following program */

#include <iostream> // for std::cout and std::cin


int main()
{
    // get a value from the user
    std::cout << "Enter an integer: ";
    int num{};
    std::cin >> num;

    // print the value doubled
    std::cout << num << " doubled is: " << num * 2 << '\n';

    return 0;
}

/*  This program is composed of two conceptual parts:
 *
 *  1. we ge a value from the user
 *  2. Then we tell the user what double that value is
 *
 *  although this program is trivial enough that we dont need to break into multiple functions.
 *  what is we wanted to? getting an integer value from theuser is a well-defined job that we want our program to do,
 *  so it would  make a good cadidate for a function
 *
 *  Lets write a program to do this:
 */

// this program does not work
#include <iostream> // for std::cout and std::cin

void getValueFromUser()
{
      std::cout << "Enter an integer: ";
      int input{};
      std::cin >> input;
}

int main()
{
    getValueFromUser(); // ask user for input

    int num{}; // how do we get the value from getValueFromUser() and use it to initialize this variable?

    std::cout << num << " doubled is: " << num * 2 << '\n';

    return 0;
}

/* while this program is good attempt at a solution, it doesnt quite work.
 *
 * when function getValueFromUser is called, the user is asked to enter an integer as expected,
 * but the value they enter is lost when getValueFromUser terminates and control return to main.
 * Variable num never gets initialized with the value the user entered. and so the program always will print 0 */


// ------ Return Values -----

/* when you write a user-defined function, you get to determinate where your function will return a value back to the caller or not.
 * to return a value back to the caller, two things are needed.
 *
 * 1. your function has to indicate what type of value will be returned.
 *
 * 2. inside the function that will return a value, we use a return statement to indicate the specific value being returned to the caller.
 * the return statement consist of the return keyword, followed by expression and ending with a semicolon.
 *
 *
 * when the return statement is executed:
 *
 * the return expression is evaluated to produce a value
 * the value produced by the return expression is copied back to the caller.
 * the function exits and control return to caller.
 *
 * lets take a look at simple function below.
 */

#include <iostream> // for std::cout and std::cin

// int is the return type
// a return type of int means the function will return some integer value to the caller.

int returnFive()
{
  //the return statement provides the value that will be returned
  return 5; // return the value 5 back to the caller
}

int main()
{
  std::cout << returnFive() << '\n'; // prints 5
  std::cout << returnFive() + 5 << '\n'; //prints 7

  returnFive(); // ok the value 5 is returned, but it is ignored since main() doesnt do anything with it

  return 0;
}

// when the program run, will print
//5
//7

// ------ Fixing our challenge program -----

#include <iostream>

int getValueFromUser() // this function now returns an integer value
{
  std::cout << "Enter an interger: ";
  int input;
  std::cin >> input;

  return input; // return the value the user entered back to the caller
}

int main()
{
  int num{ getValueFromUser() };
  std::cout << num << " doubled is: " << num * 2 << '\n';

  return 0;
}

// ----- Revisiting main()

/* you know have the conceptual tools to understand how the main() functions acctually works.
 * When the program is executed, the operating system makes a function call to main().
 * Execuiton then jumps to the top of main. The statements in main() are executed sequentially, finally
 * main() returns an integer (usually 0), and your program terminates.
 *
 * in C++, there are two special requirements for main()
 *
 * 1. main() is required to return an int.
 * 2. Explicit function calls to main() are not allowed.
 */

void foo()
{
main(); // Compile error: main not allowed to be called explicitly
}

void main() // Compile error: main not allowed to have non-int return type
{
foo();
}

// ----- Status codes

/* You may be wondering why we return 0 from main(), and when we might return something else.
 * the return value from main() is sometimes called a status code (or less commonly, an exit code, or rarely a return code).
 * The status code is used to signal wheter your program was successful or not.
 *
 * By convention, a status code 0 means the program run normally.
 */