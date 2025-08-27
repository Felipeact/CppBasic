//
// Created by Felipe Viana on 2025-08-26.
//

// ----- Header Files

/* C++ code files are not the only files commonly seen in C++ programs.
 * The other types of files is called a header file.
 * Header files usually have a .h extension, but you will occasionally see them with a .hpp
 * extension or no extension at all
 *
 *
 *  Conventionally, header files are used to propagate a bunch of related forward declarations into a code file.
 */


// using header files to propagate forward declaration.

/* lets add two files:
 *
 * 1. add.ccp
 * 2. main.cpp
 */

//add.cpp:

int add(int x, int y)
{
  return x + y;
}

//main.cpp:
#include <iostream>

int add(int x, int y); // forward declaration using function prototype

int main()
{
  std::cout << "The sum of 3 and 4 is " << add(3, 4) << '\n';
  return 0;
}

//Let’s write a header file to relieve us of this burden. Writing a header file is surprisingly easy, as header files only consist of two parts:

/* A header guard, which we’ll discuss in more detail in the next lesson (2.12 -- Header guards).
 * The actual content of the header file, which should be the forward declarations for all of the identifiers we want other files to be able to see.
 * // Adding a header file to a project works analogously to adding a source file .
 * If using an IDE, go through the same steps and choose “Header” instead of “Source” when asked. The header file should appear as part of your project.

 * If using the command line, just create a new file in your favorite editor in the same directory as your source (.cpp) files. Unlike source files,
 * header files should not be added to your compile command (they are implicitly included by #include statements and compiled as part of your source files).
 */

// Example

// add.h

// We really should have a header guard here, but will omit it for simplicity (we'll cover header guards in the next lesson)

// This is the content of the .h file, which is where the declarations go
int add(int x, int y); // function prototype for add.h -- don't forget the semicolon!

// main.cpp

#include "add.h" // Insert contents of add.h at this point.  Note use of double quotes here.
#include <iostream>

int main()
{
  std::cout << "The sum of 3 and 4 is " << add(3, 4) << '\n';
  return 0;
}

// add.cpp

#include "add.h" // Insert contents of add.h at this point.  Note use of double quotes here.

int add(int x, int y)
{
  return x + y;
}
