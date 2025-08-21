//
// Created by Felipe Viana on 2025-08-21.
//

/* Uninitialized Variables and Undefined behavior
 *
 *  to recap:
 *
 *  Initialized = The objects is given known value at the poin of definition.
 *  Assignemnt = The object is given a known value beyond the point of definition.
 *  Uninitialized = the object has not been given a value yet.
 *
 *  Relatedly, consider this variable definition:
 */

int x;

/* in previous lesson, we noted that when no initializer is provided, the variable is default-initialized.
 * In most cases(such as this one), default-initialization performs no actual initialization. We'd say x is
 * uninitialize. we're focused on the outcome (the object has not been given a known value), not the process.
 *
 * using the vakues of uninitialized variables can lead to unexpected results.
 */

#include <iostream> // for std::cout

int main() {

    // Define an integer variable named x
    int x; // this variable is uninitialized because we haven't give it a value

   // print the value x to the screen
   std::cout << x << '\n'; // who knows what we'll get, because x is uninitialized/

    return 0;
}

/* In this case, the computer will assign some unused memory to x. it will then send the value residing in that memory
 * location to std::cout, which will prin the value (interpreted as an integer). But What value will it print? The answer
 * is "Who knows", and the answer may ( or may not) change every time you run the program.
 *
 * most modern compiles will attempt to detect if a variable is being used without being a value. If they are able to
 * detect this, they will generally issue a compile-time warning or error.
 */

/* if your compiler wont let you compile and run the above program ( because it treats the issue as an error).
 */

// -------- Undefined Behavior -----

/* Using the value from uninitialized variable is our first example of undefined behavior. Undefined Behavior (often
 * abbreviated UB) is the result of executing code who behavior is not well-defined by the C++ language. In this case,
 * The C++ langauge doesnt have any rules determining what happens if you use the value of variable that has not been
 * given a known value,
 *
 * Code implementing undefined behavior may exhibit any of the follow symptoms:
 *
 * Program produces different results every time it is run.
 * Your program consistently produces the same incorrect result
 * Program Behaves inconsistently (Sometimes produces the correct result, sometimes not)
 * Program seems like it is working but produces incorrect results later in the program
 * Program crashes, either immediately or later
 * program works on some compilers but not others
 * Program works until you change some other seemingly unrelated code.
 *
 */


// ------- Implementation-defined behavior and unspecified behavior ------

/* A specific compiler and the associated standard library it comes which are called an implementation ( as these are
 * what actually implements the C++ language). In some cases the C++ language standard allows the implementation to determine
 * hose some aspect of the language will behave, so that the compiler can choose a behavior that is efficient for a given
 * platform. Behavior that is defined by the implementation is called implementation-defined behavior. This must be
 * documented and consistent for a given implementation.
 *
 * lest look at a simple example of implementation-defined behavior:
 */

#include <iostream> // for std::cout

int main() {
    std::cout << sizeof(int) << '\n'; // print how many bytes of memory an int value takes
    return 0;
}

// on most platforms, this will produce 4, but other it may produce 2.