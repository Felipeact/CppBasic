//
// Created by Felipe Viana on 2025-09-03.
//

/* Object sizes and the sizeof operator */

/* the more memory an object uses, the more information it can hold
 *
 * A single bit can hold 2 possibe values 0 or 1, 2 bits can hold 4 possibles values,
 * 0 0, 0 1, 1 0, 1 1 , 3 bits can hold 8 possible values 0 0 0, 0 0 1, 0 1 0, 0 1 1, 1 0 0, 1 0 1, 1 1 0, 1 1 1.
 *
 * To generalize an object with n bits ( where n is an integer ) can hold 2^n ( 2 to the power of n, also commonly writte 2^n)
 * unique values. Therefore, with an 8-bit byte, a byte sized object can hold 2^8 (256) different values.
 * An object that uses 2 bytes can hold 2^16 (65536) different values.
 *
 * Thus. the size of the object puts a limit on the amount of unique values it can store, objects that utilizes more
 * bytes store a larger number of unique values */

/*  Fundamental data type sizes */

/* Category           Type          Minimum Size          Typical Size
 * Boolean            bool          1 byte                1 byte
 *
 * Character          char          1 byte(exactly)       1 byte
 *                    wchar_t       1 byte                2 or 4 byte
 *                    char8_t       1 byte                1 byte
 *                    char16_t      2 bytes               2 bytes
 *                    char32_t      4 bytes               4 bytes
 *
 * Integral           short         2 bytes               2 bytes
 *                    int           2 bytes               4 bytes
 *                    long          4 bytes               4 or 8 bytes
 *                    long long     8 bytes               8 bytes
 *
 * Floating point     float         4 bytes               4 bytes
 *                    double        8 bytes               8 bytes
 *                    long double   8 bytes               8, 12, or 16 bytes
 *
 * Pointer            std::nullptr_t 4bytes               4 or 8 bytes
 */

/* The sizeof operator */

/* In order to determine the size of data types on a particular machine, C++ provides an operator
 * named sizeof. The sizeof operator is a unary operator that takes either a type or a variable, and
 * returns the size of an object of that type in bytes.
 *
 * Example */

#include <iomanip> // for std::setw (which sets the width of the subsequent output)
#include <iostream>
#include <climits> // for CHAR_BIT

int main()
{
 std::cout << "A byte is " << CHAR_BIT << " bits\n\n";

 std::cout << std::left; // left justify output

 std::cout << std::setw(16) << "bool:" << sizeof(bool) << " bytes\n";
 std::cout << std::setw(16) << "char:" << sizeof(char) << " bytes\n";
 std::cout << std::setw(16) << "short:" << sizeof(short) << " bytes\n";
 std::cout << std::setw(16) << "int:" << sizeof(int) << " bytes\n";
 std::cout << std::setw(16) << "long:" << sizeof(long) << " bytes\n";
 std::cout << std::setw(16) << "long long:" << sizeof(long long) << " bytes\n";
 std::cout << std::setw(16) << "float:" << sizeof(float) << " bytes\n";
 std::cout << std::setw(16) << "double:" << sizeof(double) << " bytes\n";
 std::cout << std::setw(16) << "long double:" << sizeof(long double) << " bytes\n";

 return 0;
}

/*
bool:           1 bytes
char:           1 bytes
short:          2 bytes
int:            4 bytes
long:           4 bytes
long long:      8 bytes
float:          4 bytes
double:         8 bytes
long double:    8 bytes
 */