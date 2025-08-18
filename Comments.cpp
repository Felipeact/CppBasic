//
// Created by Felipe Viana on 2025-08-15.
//

/* A Comment is a programmer-readble note that is inserted directly into the source code of program
 *
 * Comments are ignored by the compiler and are for programmers use only
 *
 *  ------------ Single Line Comment ---------
 *
 *  The // symbol begins a single line comment, wich tells the compiler to ignore everything from the //to the end
 *  of the line.
 */

 std::cout << "Hello World"; // Everything from here to the end of the line is ignored

// Typically s single line comment is used to make a quick comment about a single line of code.

std::cout << "Hello World\n" // std::out lives in the iostream library

// However is the lines are long, single line comments are often placed above the line it is comenting.

// std::cout lives in the iostream library
std::cout << "Hello world!\n";

// ------------ Multi Line Comment ---------

// The /* and */ pair of symbols denotes a C-style multi-line comment. Everything in between the symbols is ignored.

/* This is a multi-line comment.
 * the matching asterisks to the left
 * can make this easier to read
 */

// ------------ Proper use of Comments ---------

/* Typically comments are use for three things.
 *
 * 1. For a given library, program or function, comments are best used to describe what the library, program or function
 * does. these are typically placed at the top of the file or library, or immediately preceding the function
 * for example.
 */

// This program calculates the student's final grade based on their test and homework scores.

// This function uses Newton's method to approximate the root of a given equation.

// The following lines generate a random item based on rarity, level, and a weight factor.

/* All the comments above give the reader a good idea of what the library, program or function is trying to
 * accomplish whithou have to look at teh actual code */

/* 2. Within a library, program, or function described above, comments can be used to describe how the code is
 * going to accomplish its goal. */

/* To calculate the final grade, we sum all the weighted midterm and homework scores
and then divide by the number of scores to assign a percentage, which is
used to calculate a letter grade. */

// To generate a random item, we're going to do the following:
// 1) Put all of the items of the desired rarity on a list
// 2) Calculate a probability for each item based on level and weight factor
// 3) Choose a random number
// 4) Figure out which item that random number corresponds to
// 5) Return the appropriate item

/* The comments give the user an idea of hoe the code is going to accomplish its goal without having to understand
 * what each line of code does.
 */

/* 3. At the statement level, commments should be used to describe why the code is doing something. */

// The player just drank a potion of blindness and can not see anything
sight = 0;

// We need to multiply quantity by 2 here because they are bought in pairs
cost = quantity * 2 * storePrice;
