//
// Created by Felipe Viana on 2025-08-26.
//

// ----- Local Variables -----

/* Variables defined inside the body of a function are called local variable. */

int add( int x, int y)
{
    int z{ x + y }; // z is a local variable

    return z;
}

// functions parameters are also generally considered to be local variable.

int add( int x, int y) // function parameters x and y are local variables
{
    int z{ x + y }; // z is a local variable

    return z;
}

// ----- Local Variable lifetime -----

// Functions parameters are created and initialized when the function is entered, and
//variables within the function body are created an initialized at the point of definition

// example

int add(int x, int y) // x and y created and initialized here
{
    int z{ x + y };   // z created and initialized here

    return z;
}

/* The natural follow up question is, "So when is an instantiated variable destroyed?".
 * Local variabkes are destroyed in the opposite of creation at the end of the set of curly braces
 * in which it is defined.
 */

int add(int x, int y)
{
    int z{ x + y };

    return z;
} // z, y, and x destroyed here