//
// Created by Felipe Viana on 2025-09-02.
//

/* Void */

/* void is the easiest of the data type to explain. Basically, void means "no type" */

void value; // wont work, variables cant be defined with the incomplete type void

/* Functions that do not return value */

void writeValue(int x) // void here means no return value
{
    std::cout << "The value of x is: " << x << '\n';
    // no return statement, because this function doesnt return value
}

// if you use a  return statement to try to return in such a function, a compile error will result

void noReturn( int x) // void here means no return value
{
    std::cout << "The value of x is: " << x << '\n';

    return 5; // error
}