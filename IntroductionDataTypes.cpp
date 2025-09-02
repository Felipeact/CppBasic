//
// Created by Felipe Viana on 2025-09-02.
//

/* Bits, Bytes and Memory Addressing */

/* The smallest unit of memory is a binary digit (also called a bit), which cal hold a value of
 * 0 or 1, You can think of a bit as being traditional light switch, either 0 is off and 1 is on.
 *
 * Memory is organized into sequential units called memory addresses ( or addresses for short),
 * Similar to how a street address can be used to find a given house on a street, the memory
 * allow us to finc access the contents of memory at a particular location.
 *
 * Each memory address hold 1 byte of data. A byte o data is a group od bits that are operated
 * on as unit. The modern standard is that byte is a comprised of 8 sequential bits.
 */

/* Data Type */

/* Because all data on a computer is just a sequence of bits, we use a data type (often called a type for short)
 * to tell the computer how to interpret the contents of memory in some meaningful way.
 *
 * When you give a object a value, the compiler and CPU take care of encoding your value into the appropriate sequence
 * of bits for that data type which are then sorted in memory (remember: memory can only store bits).
 * For example, if you assign an integer object value 65, that value is converted to the sequence of bits 0100 0001
 * and stored in the memory assigned to the object.
 *
 *
 * Fundamental data types
 *
 * Here is the list of fundamental data types, some of which we have seen.
 *
 *
 *
 * Types            Category                Meaning                               Example
 *
 * float            Floating Point          a number with a fractional part       3.14159
 * double
 * long double
 *
 * bool             integral (Boolean)      true or false                         true
 * char             integral (Character)    A single character of text            'c'
 * wchart_t
 * char8_t(C++20)
 * char16_t(C++11)
 * char32_t(C++11)
 *
 * short int        integral (Integer)      Positive or negative whole number       4 / 0
 * int
 * long int
 * lon long int
 *
 * std::nullptr     Null pointer            a null pointer                          nullptr
 *
 * void             Void                     no type                                n/a
 *
 */

/* Integer vs Integral Types */

/* In mathematics, an "integers" is a number with no decimal or fractional part, including
 * negative and positive numbers and zero. The term "integral" has several different meanings,
 * but in context of C++ is used to emean "like an integer".
 *
 * the C++ standard defines the following terms:
 *
 * The standard integer types are short, int, long, lon long
 * The integral types are bool, the various char types, and the standard integer types
 *
 *
 */
