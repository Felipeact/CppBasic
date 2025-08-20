//
// Created by Felipe Viana on 2025-08-20.
//

/* ------- The input/output library ------- /*
 *
 * the input/output library is part of C++ Standard library that deals with basic input and output, we'll use the functionality
 * in this library to get input from the keyboard and output data to teh console.
 *
 * io stands for input/output.
 *
 * to use this functionality we need to include the iostream header at the top of any code.
 */

#include <iostream> // rest of the code that uses iostream functionality here

// ------- std::cout ------

/* One of the most useful is std::cout, which allows us to send data to the console to be printed as text, cout stand
 * for character output.
 */

#include <iostream> // for std::cout

int main() {

    std::cout << "Hello World"; // print Hello World to the console.

    return 0;
}

// std::cout can also print numbers and variable values.

/* to print more than on thing on the same lin, the insertion operator (<<) can be used multiple times in a single
 * statement to concatenate multiple pieces of output

    Example
 */

#include <iostream> // for std::cout

int main() {

    std::cout << "Hello" << " World";
    return  0;
}

// This program will print:: Hello World;

/* std::cout is buffered
 *
 * This analogy is similar to how output sent to std::cout is typically processed in C++. Statements in our program
 * request that output be sent to the console. However, that output is typically not sent to the console immediately.
 * instead the request output gets in the line and is stored in a region of memory set aside to collect such requests
 * called a buffer. Periodically the buffer is flushed, meaning all of the data collected in the buffer is transferred
 * to its destination( in this case the console)
 *
 */

// ------- std::endl ------

/* If we want to print separate lines of output to the console, we need to tell the console to move the cursor to the next
 * line. we can do that by outputting a newline.
 *
 * A new line os an OS-specific character ot sequence of characters that moves the cursor to the start of next line
 *
 * one way to outuput a newline is to output std::endl (which stand for :end line)
 */

#include <iostream> // std::cout and std::endl

int main() {
    std::cout << "Hi!" << std::endl;
    std::cout << "My name is Alex" << std::endl;

    return 0;
}

// this program will print

//Hi!
//My name is Alex

/* endl vs \n
 *
 * using endl it flushes the buffer which is slow. IF we output multiple lines if text ending with std::endl, we will get
 * multiple flushes, which is slow and probably unnecessary.
 *
 * To output a newline without flushing the output buffer, we use \n, which is a special symbol that the compiler
 * interprets as a newline character.
 *
 * \n moves the cursor to the next line of the console without causing a flush.
 *
 * here is an example.
 */

#include <iostream> // for std::cout

int main() {
    int x{ 5 };
    std::cout << "x is equal to: " << x << '\n'; // single quotes (by itself) (conventional)
    std::cout << "Yep." << "\n"; // double quoted (by itself) (unconventional but okay)
    std::cout << "And that is all, folks!\n"; // between double quotes in existing text (conventional)

    return 0;
}

// this prints:

//x is equal to: 5
//Yep.
//And that is all, folks!


// ------- std::cin ------

/* std::cin is another predefined variable in the iostream librarym, std::cin (which stand for "character input") reads
 * input from keyboard. We typically yje the extraction operator >> to put the data in a variable.
 *
 * Example
 */

#include <iostream>// for std::cin and std::cout
int main() {

    std::cout << "Enter a number: "; //ask the user for a number

    int x{}; // define variable x to hold a user input(and value-initialize it)
    std::cin >> x; // get number from keyboard and store it in variable x

    std::cout << "You entered " << x << '\n';

    return 0;
}

// in this case the program will ask for you to type a number.
//for example  (entering the value 4) the output would be

//Enter a number:  4
//You entered  4