// Basic

// Variables
/* variable is the name of a location in memory where we can store a value, because the value can
change

To declare o variable in C++, specify the type you want to store, give the variable a proper
meaningfully name,OPTIONAL assign a value to the variable then terminate with a semi column.

*** Warning Always initialize a variable before using it ***

int (integer) store whole number = 1, 2, 3, 100, etc.
double store decimal point = 1.1, 2.2, 3.3, etc.

*/

#include <algorithm>

int EXOne();
int EXTwo();
int EXThree();
int EXFour();
int EXFive();
int EXSix();

#include <iostream>

using namespace  std;

int main ()
{

    int file_size = 0;
    int counter = 0;
    double sales = 9.99;

    std::cout <<  file_size;

    cout << "\n -------------- Exercise bellow ---------------\n";
    EXOne();
    EXTwo();
    EXThree();
    EXFour();
    EXFive();
    EXSix();

    return 0;

}

// EXERCISE 1
// write a code to swap the value of two variables.

int EXOne()
{
    int a = 1;
    int b = 2;

    int temp = a;
    a = b;
    b = temp;

    cout << "\n Exercise 1 ------- \n";
    cout << a;

    return 0;
}

// CONSTANTS
//  are used if you don't want a variable value to be changed

int Constants()
{
    const double pi = 3.14;
    // pi = 0; << cannot change the value of Pi due to be a const
    cout << pi;
    return 0;
}

// Naming Conventions

int NameConventions()
{
    int file_zie; // Snake Case
    int FileSize; // Pascal Case
    int fileSize; // Camel Case
    int iFileSize; // Hungarian Notation << Old Notation , not relevant anymore

    return 0;
}


// Mathematical Expressions
/*
 *  + Additional operator
 *  - Subtraction operator
 *  * Multiply operator
 *  / Division operator, can be difficult if you are make a division with 2 whole number and
 * return a double, gotta change the type to double.
 *  % Module operator, returns the reminder of an division
 *
 *  ++ increment operator
 *  -- decrement operator
 *
 *  example
 *
 *  post fix
 *  if a value signed for a variable is 10 and we are post incrementing
 *  the value will be 11 after executed
 *
 *  x = 10; the value of x now is 11
 *  y = x++; the value of y will be 10
 *
 *  pre fix
 *
 *  first the value will be incremented and stored to a new variable after;
 *
 *  x = 10; the value will be 11
 *  z = ++x; the value will be 11
 *
 */

int MathematicalExpressions()
{
    int x = 10;
    int y = x++; // x = 11, y = 10

    x = 10;
    int z = ++x; // x = 11, y = 11

    cout << x;
    return 0;
}
// Oder of Operators

/*
 * Sequence
 *
 *  * Multiplication comes first
 *  / Division comes second
 *  + Action
 *  - Subtract
 *  but we can change the sequence using ( )
 *  if we add  ( ) whatever in inside comes first
 *
 */

int OrderOfOperators()
{
    double x = (1 + 2) * 3; // this will be 9


    cout << x;
    return 0;
}

//Exercise 2

int EXTwo()
{
    const double x = 10;
    const double y = 5;

    double z = ( x + 10 ) / ( 3 * y);

    cout << "\n Exercise 2 ------- \n";
    cout << z;
    return 0;
}

// Writing output to the console

int OutputConsole()
{
    int x = 10;
    int y = 20;

    cout << "x = " << x << endl
         << "y = " << y << endl;

    return 0;
}

// Exercise 3
int EXThree()
{

    cout << "\n Exercise 3 ------- \n";
    double Sales = 9500;
    cout << "Sales = $" << Sales << endl;

    double StateTax = 0.04;
    double TotalStateTax = Sales * StateTax;
    cout << "Total State Tax = $" << TotalStateTax << endl;

    double CountyTax = 0.02;
    double TotalCountyTax = Sales * CountyTax;
    cout << "Total County Tax = $" << TotalCountyTax << endl;

    double TotalTaxes = TotalStateTax + TotalCountyTax;
    double TotalSales = Sales - TotalTaxes;

    cout << "Total Tax = $" << TotalTaxes << ","
         << "Total Sales = $" << TotalSales << endl;
    return 0;

}

// Reading from the console

// cin - standard input stream, can use to input data through the console

int ReadingConsole()
{
    // Single Value
    cout << "Enter a value: ";
    int value;

    cin >> value;
    cout << value;

    //Multiple Value

    cout << "Enter values for x and y: ";
    double x;
    double y;

    cin >> x;
    cin >> y;

    cout << x + y;

    // other way

    cin >> x >> y;
    cout << x << y;

    return 0;
}

// Exercise 4

int EXFour()
{

    cout << "\n Exercise 4 ------- \n";
    cout << "Enter a temperature in fahrenheit: ";
    double Fahrenheit;
    cin >> Fahrenheit;

    double Celsius = (Fahrenheit - 32) * 5/9;
    cout << Celsius;
    return 0;
}

#include <cmath>
// Writting to the console

int WrittingConsole()
{
    double result = floor(1.2);
    cout << result;

    result = pow(2, 3);
    cout << result;

    return 0;
}

// Exercise 5

int EXFive()
{
    // Write a program to calculate the area of a circle
    cout << "\n Exercise 5 ------- \n";
    cout << "Enter radius: ";
    double radius;

    cin >> radius;
    const double pi = 3.14;
    double area = pi * pow(radius, 2);
    cout << area;

    return 0;
}

// Comments

// In line comment
/*
 * Multiple line comment
 */


 // Fundamental Data Types

/*
 *  Statically Static               Dynamically-Typed
 *
 *  C++                             Python
 *  C#                              Javascript
 *  Java                            Ruby
 *
 *  Whole number Values
 *
 *  Type            Bytes          Range
 *  short           2              -32,768 to 32,767
 *  int             4              -2 Billion to 2 Billion
 *  long            4              Same ^
 *  long long       8
 *
 *  Decimal Values
 *
 *  float           8              -3.4E38 to 3.4E38
 *  double          8              -1.7E308 to 1.7e308
 *  long double     8              -3.4E932 to 1.7E4832
 *
 *  Boolean Values
 *
 *  bool            1              true/false
 *  char            1
 */

int DataType()
{

    double Price = 99.99;
    float InterestRate = 3.67F; // when working with float values always add the F at the end of the value

    long FileSize = 90000L; // when working with float values always add the F at the end of the value
    char letter = 'a';
    bool isValid = false;

    // we can use auto to let the compile to decide what type is our variable.

    // brace initialization

    double Number{1.2}; // same as double Number = 1.2;

    cout << Number;
    return 0;
}

// Working with number

/*
*  Type                     Digits          Example
*  Decimal(Base 10)         0-9             255
*  Binary(Base 2)           0,1             111111
*  Hexadecimal(Base 16)     0-9, A-F        FF
*
*  unsigned int number = -255;  an unsigned variable cannot have a negative value
*
*
*/

int Numbers()
{
    //Decimal System
    int Number = 255;
    cout << Number; // 255

    //Binary System
    Number = 0b11111111;
    cout << Number; // 255

    // Hexadecimal System,
    Number = 0xFF;
    cout << Number; // 255

    return 0;
}

//Narrowing

int Narrowing()
{
    int number = 1'000'000;
    short another = number;

    cout << another;
    return 0;
}

// Random Numbers

#include <cstdlib>
#include <ctime>

int RandomNumbers()
{
    srand(time(nullptr));
    int number = rand() % 10;
    cout << number;
    return 0;
}

// Exercise 06

//rolling a dice

int EXSix() {
    srand(time(nullptr));

    const short MinValue = 1;
    const  short MaxValue = 6;

    short Dice =  rand() % (MaxValue - MinValue + 1) + MinValue;

    cout << Dice;
    return 0;
}