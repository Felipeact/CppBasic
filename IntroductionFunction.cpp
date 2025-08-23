//
// Created by Felipe Viana on 2025-08-21.
//

/* C++ programs can work the same way (and borrow some of the same nomenclature).
 * A program will be executing statements sequentially inside one function when it
 * encounters a function call. a function call tells the CPU to interrupt the
 * current function and execute another function. The CPU essentially "puts a bookmark"
 * at the current point of execution, executes the function named in the function call
 * and then returns to the point it bookmarked and resumes execution.
 *
 * An example of a user-defined function
 *
 * first let's start with the most basic syntax to define a user-defined function.
 * for the next few lessons, all user-defined functions will take the following form:
 */

returnType functionName() // this is the function header ( tells the compiler about the existence of the function)
{
    // this is the function body (tells the compiler what the function does)
}

/* The first line is informally called the function header, and it tells the compiler about
 * the existence of a function, the function's name, and some other information that we'l_fastcallcover in
 * future lessons.
 *
 * Here is a sample program that illustrate a user-defined function being defined and called:
 */


#include <iostream> // for std::cout

// definition of user-defined function doPrint()
// doPrint() is the called function in this example

void doPrint() {
  std::cout << "In doPrint()\n";
}

// Definition of user-defined function main()
int main() {
    std::cout << "Starting main()\n";
    doPrint();                        // Interrupt main() by making a function call to doPrint(). main() is the caller.
    std::cout << "Ending main()\n";   // This statement is executed after doPrint() ends.

    return 0;
}

// ----- Calling functions more than once

// Ine useful thing about function is that they can be called more than once. Here is a program that demonstrate this.

#include <iostream> // for std::cout

void doPrint() {
    std::cout << "Starting main()\n";
    doPrint(); // doPrint() called for teh first time
    doPrint(); // doPrint() called fo the second time
    std::cout << "Ending main()\n";

    return 0;
}

// Nested Funtion are not supported

/* Afunction whose definition is placed inside another function is a nested function.
 * Unlike some other programming languages, In C++, functions cannot be nested.
 *
 * The Folloing program is not legal. */

int main() {

    void foo() // illegal: this function is nested inside the function main()
    {
        std::cout << "foo!\n";
    }

    foo(); // function call to foo
    return 0;
}


