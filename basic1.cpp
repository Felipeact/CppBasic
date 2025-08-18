
// Created by Felipe Viana on 2025-08-11.


/*
 * 1. How to write the code
 *
 * 2. How to compile the code
 *
 * 3. How to execute the code
 *
 *
 * -------------------------------------------
 *          How to write the code
 *
 *  to write the code we need to understand the C++ programming structure
 *  components of c++ structures are
 *
 *  1. Standard Libraries Section
 *  2. Main Function section
 *  3. Function body section
 *
 *  -------------------------------------------
 *          Standard Library Section
 *
 *  Standard library section passes of two statement
 *
 */
#include <iostream>
using namespace std;

/*
 * #include is the preprocessor command that includes all the files of a library specified
 * within an angular brackets
 *
 * <iostream> is a standard files that contains all the files required for displaying and taking
 * input from the user
 *
 * iostream contains the 2 most used objects that is:
 *
 *  cin ->  cin is an object of input stream where we use the insert operator >> to take
 *  an input from the user
 *
 *  cout -> cout is an object of output stream where we use the extraction operator << to
 *  display something on the screen
 *
 *
 * namespace is used to avoid collision between the similar functions names or variable names.
 *
 *  namespace removes the ambiguity.
 *
 *  std is a predefined namespace in c++.
 *
 *  to use cin and cout on our program we have to use the std namespace.
 *
 *  to ways to use it
 *
 *  std::cin;
 *  std::cout;
 *
 *  or
 *
 *  using namespace std;
 *  cin;
 *  cout;
 *
 *
 *  if we use the namespace std we wont need to use std::, this avoid ambiguity cause depending
 *  the size of your program if will need to use a lot of time.
 *
 */

// -------------------------------------------
//          Main Function Section

//int main(){}

/*
 * The main function is the starting function of all the c++ programs
 *
 * the body of the function start with the curly brackets { and end with curly brackets }
 *
 */

// int main()
// {
 // body statement
 /*
  * the body statement is written by the programmer according to their requirements.
  */


 //return 0; // the return keyword return a value to the main function

 // after the return statement the program will get terminated
 // the value passed within the return keyword must match with return type of the method
//}

/* ----------------- First Program --------- */

#include  <iostream>
using namespace std;

void Calculator();

int main () {

  cout << "Hello World! :)" << endl;
  Calculator();


 return 0;
}

void Calculator() {
 char CharacterOperator;
 double NumberOne, NumberTwo;
 int result = 0;

 cout << "Enter and Operator" << endl;
 cin >> CharacterOperator;


 while (true) {
  if ( CharacterOperator != '+' || CharacterOperator != '-') {
   cout << "Enter a valid operator " << endl;

  }

  cout << "Enter a number" << endl;
  cin >> NumberOne;
  cout << "Enter a second number" << endl;
  cin >> NumberTwo;

  if ( CharacterOperator == '+') {
   result = NumberOne + NumberTwo;
   cout << result << endl;
  }

  if (CharacterOperator == '-') {
   result = NumberOne - NumberTwo;
   cout << result << endl;
  }

  if ( CharacterOperator == '*') {
   result =  NumberOne * NumberTwo;
   cout << result << endl;
  }

 }


}