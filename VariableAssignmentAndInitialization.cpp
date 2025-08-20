//
// Created by Felipe Viana on 2025-08-19.
//

int main () {

    int x; // define an integer variable named x (preferred)
    int y, z; // define two integer variable, named y and z

    return 0;
}

// as a reminder, it is preferred to define one variable per line.

/* After a variable has been defined, you can give a value using the = operator. This process is called assignment, and
 * the = operator is called the assignment operator.
 */

int width; // define an integer variable named width
width = 5; // assign the value 5 into variable width

// Variable width now has value 5

/* Once a variable has been given a valye, the balue of that variable can be printed via std::cout and the << operator.
 *
 * Assignment can be used whenever we want to change the value held by a variable. Here is an example where we use
 * assignment twice
 */

#include <iostream>

int main() {

    int width; // define a variable named width
    width = 5; // copy assigment of value 5 into variable width

    std::cout << width; // print 5

    width = 7; // Change value stored in variable width to 7

    std::cout << width; // print 7

    return 0;
}

// The program above will print on the console 57

// ------ Variable Initialization

/*  When an object is defined, you can optionally provide an initial value for the object. the process od specifying
 *  an initial value for an object is called initialization, and the syntax used to initialize an object is an
 *  initializer. Informally, the initial value is often called an initializer as well
 */

#include  <iostream>
int main() {

    int width{ 5 }; // define a variable width and initialize with initial value 5
    std::cout << width; // print 5

    return 0;
}

// ------ Different forms of Initialization

/* Unlike assignment (which is generally straight forward), initialization in C++ is suprisingly complex.
 * there are 5 common form of initialization in C++.
 */

int a; // default initialization (no initializer)

// Traditional Initialization forms
int b = 5;   // Copy initialization( initial value after equals sign)
int c( 6 ); // Direct initialization (initial value in parentheses)

// Modern Initialization forms (preferred)

int d { 7 };    // Direct list initialization (initial value in braces)
int e {};       // Value Initialization (Empty Braces)