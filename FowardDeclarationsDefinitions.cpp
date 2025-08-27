//
// Created by Felipe Viana on 2025-08-26.
//

// Take a look on this example below

#include <iostream>

int main()
{
  std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
  return 0;
}

int add(int x, int y)
{
  return x + y;
}

/* the resason this program doesnt compile is because the compile compiles the contents
 * of the code files sequentially. when the compiler reaches the function call add() on line 11
 * of main. it doesnt know what add is.
 *
 * 1. Reorder the function definitions
 */

#include <iostream>

int add(int x, int y)
{
  return x + y;
}

int main()
{
  std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
  return 0;
}

/* 2. Use a forward declaration */

/* To write a foward declaration for a function, we use a function declaration statement ( also
 * called a function prototype ). The function declaration consists of the functions return type.
 * The function body is not included in the decaration.
 *
 * example
 */

int add(int x, int y); // function declaration includes return type, name, parameters, and semicolon.  No function body!

// new program

#include <iostream>

int add(int x, int y); // forward declaration of add() (using a function declaration)

int main()
{
  std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n'; // this works because we forward declared add() above
  return 0;
}

int add(int x, int y) // even though the body of add() isn't defined until here
{
  return x + y;
}