//
// Created by Felipe Viana on 2025-09-03.
//

/* Signed integers */

/* An integers is an integral type that can represent positive and negative whole
 * numbers, including 0, c++ has primary funcamental integet types available for use.
 *
 *
 * Type               Minimum Size        Note
 * short int          16 bits
 * int                16 bits             Typically 32 bits on modern architectures
 * long int           32 bits
 * long long int       64 bits
 *
 * They key difference between the various integer types is that they have varying
 * sizes, the larger integers can hold bigger numbers. */

/* Signed integers */

/* When writting negative numbers in everyday life, we use a negative sign, this attribute
 * of being positive, negative or zero is called numbers sign.
 *
 * By default, integers in C++ are signed, which means the numbers sign is stored as part of the value.
 * Therefore, a signed integer can hold both positive and negative numbers and 0.
 */

 /* Defining signed integers */

short s;        // prefer "short" instead of "short int"
int i;         //
long l;        //  prefer "long" instead of "long int"
long long ll;  //   prefer "long long" instead of "long long int"

// The integer types can also take an optional signed keyword, which by convention is typically placed before the name

signed short s;        // prefer "short" instead of "short int"
signed int i;         //
signed long l;        //  prefer "long" instead of "long int"
signed long long ll;  //   prefer "long long" instead of "long long int"

//However, this keyword should not be used, as it is redundant, since integers are signed by default.

/* Signed Integers ranges */

/* Size / Type       Range
 * 8-bit ssigned     -128 to 127
 * 16-bit signed     -32,768 to 32,767
 * 32-bit signed     -2,147,483,648 to 2,147,483,647
 * 64-bit signed     -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
 *
 * for the math inclined, an n-bit signed variable has a range of -(2^n-1) to (2^n-1)-1 */

