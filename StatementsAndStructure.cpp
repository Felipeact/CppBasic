//
// Created by USER1 on 2025-08-13.
//

// Statement

// A computer program is a sequence of instructions tha tell the computer what to do
// A Statement is a type of instructions that causes the program to perform some action

// in C++ most statements (but not all) end in a semicolumn;

/*
In C++, statements are typically grouped into units called functions.A function is a collection
of statements that get executed sequentially(in order, from top to bottom). As you learn to write
your own programs, you’ll be able to create your own functions and mix and match
statements in any way you please (we’ll show how in a future lesson).

----- Functions and the Main Function

A function is a collection os statements that get executed sequentially  (in order from top to bottom)

---------------- RULE !!!! -------------

Every C++ program must have a special function named main (All lower case letters)

----------------------------------------

When the program is running, the statement inside main are executed in sequential order.

Functions are typically written to do a specific job or perform some useful action.
More about function soon

In programming, the name of a function (or object, type, template, etc…) is called its identifier.

----- Characters and Text

A character is a written symbol or mark, such as a letter, digit, punctuation mark, or mathematical symbol.

The following are all characters: a, 2, $, and =.

----- Dissecting Hello world!

*/

#include <iostream> // is a preprocessor including all the functionalities from iostream (Standard Library), allows
// read and write from/to the console
 // <- this line is blank, so it is ignored by the compiler, this helps to add the program more readable to humans
int main() //
{// Opening main function, start to read the statements
    std::cout << "Hello world!";
    return 0;
} // closing the main function, stop to read the statements

