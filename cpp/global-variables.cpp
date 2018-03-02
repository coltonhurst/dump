/*
    Here is a simple example of global variables in C++.

    By declaring the variable outside of main(), any function
    can access the variable- it has a global scope.

    What if there is another variable with the same name?
    Well, the local variable will take precedence!
*/

#include <iostream>

int num1 = 10;

int main()
{
    std::cout << num1 << std::endl;  // no local variable yet, prints 10

    int num1 = -1;                   // the local variable with the same name

    std::cout << num1;               // prints -1

    return 0;
}
