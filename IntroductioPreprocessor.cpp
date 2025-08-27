//
// Created by Felipe Viana on 2025-08-26.
//

// ---- Macro Defines

/* the #define directive can be used to create a macro. In C++, a macro is a
 * rule that defines how inut text is converted into replacement output text.
 *
 * there are two basic types of macros: Object-like macros, and function-like macros.
 *
 * Functios-like macros act like functions, and serve a similar purpose. Their use is
 * generally considered unsafe, and almost anything they can do can be done by a normal dunction.
 *
 * Object-like macros can be defined in one of two ways.
 *
 * #define IDENTIFIER
 * #define IDENTIFIER substitution_text
 *
 * The top definition has no substitution text, whereas the bottom one does.
 * Because these are preprocessor directives (not statements), note that neither form ends with a semicolon.
 */

// ---- Object-like macros with substitution text

#include <iostream>

#define MY_NAME "Alex"

int main()
{
  std::cout << "My name is: " << MY_NAME << '\n';

  return 0;
}

// The preprocessor converts the above into the following:

// The contents of iostream are inserted here

int main()
{
  std::cout << "My name is: " << "Alex" << '\n';

  return 0;
}