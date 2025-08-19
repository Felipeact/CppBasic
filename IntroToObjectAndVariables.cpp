//
// Created by Felipe Viana on 2025-08-19.
//

/* ------------ Data and Value ------ */

/* In the Lesson Statements and Structure we learned that the majority of instructions in a program are statements and
 * that functions are group of statements that execute sequentially.
 *
 * But how do programs actually produce results? they do so by manipulating( reading, changing, and writing) data.
 * In computing, data is any information that can be moved, processed or stored by a computer.
 *
 * A program can acquire data to work with many ways; from a file or database, over a network, from the user providing
 * input on a keyboard or from the programmer putting data directly from the source code.auto
 *
 * in programming  a single piece of data is called value( sometimes called a data value). ]
 * examples:
 *
 * Number (5 or -6.7)
 * Characters, which are placed between single quotes ('H', '$'). Only a single symbol may be used
 * Text, which must be places between double-quotes ("Hello", "H"), Text can contain 0 or more characters.
 *
 * values that are placed directly into the source are called Literals.
 */

// -------- Printing Values to the console.

#include <iostream> // for std::cout

int main() {
    std::cout << 5; // print the literal number 5
    std::cout << 'H'; // print the character 'H'
    std::cout << "Hello"; // print the literal text "Hello"

    return 0;

}

/*
 *If a character value or text value is not properly quoted, the compiler will try to interpret that value as if it were
 * C++ code, that will almost always result in a compilation error.
 *
 * literals are the easiest way to provide values for a program, but they have shortcomings. Literals are read-only
 * values, so their values cant be modified. If we want to store data in memory, we need some other way to do this.
 */

// ------- Randon Access Memory

/* The main memory in a computer is called Random Access Memory,( Oftem called RAM for short). when we run a program, the
 * operating system loads the program into RAM, any data that us hardcoded into the program itself ( "Hello World") is
 * loaded at this point.auto
 *
 * The operating system also reserves some additional ram for the program to use while it is running.
 *
 * You can think of Ram as a series of numbered boxes that can be used to store data while the program is running.
 */

// ------- Objects and Variables

/* In C++ we access memory indirectly through an object. And object represents a region of storage (typically Ram or a
 * CPU register) that can hold  a value. Objects also have associated properties.
 *
 * Although objects in C++ can be unnamed ( anonymous), more often we name our objects using an identifier. An Object with
 * a name is called a variable.
 */

// ------- Variable Definition

/* In order yo use a variable in our rpogram, we need to tell the compiler that we want one. The most commom way to do
 * this is by use of a special kind of declaration statement called a definition.
 *
 * here is an example of defining a variable named x;
 */

int x; // define a variable named x ( of type int)

/* A variable created via a definition it said to be defined at the point where definition statement is placed. for
 * now, your variables should be defined inside function.
 *
 * Hers is a full program containing a variable definition statement.
 */

int main() {

    int x; // definition of variable x

    return 0;
}

// ------- Defining Multiple variables

/* it is possible to define multiple variables of the same typ in a single statement by separating the names
 * with a comma
 */

int a, b;
