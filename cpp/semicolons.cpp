/*
    This program demonstrates how C++ doesn't care about new lines.
    Statements are separated by semicolons.

    These are the 3 statements on one line:

    std::cout << "How are ";
    std::cout << "you?";
    std::cout << std::endl;

    It prints out: How are you?
    with a new line at the end.

    std::endl is a manipulator that inserts a newline character
    into the output stream. It also flushes the output stream.
*/

#include <iostream>

int main()
{
    std::cout << "How are "; std::cout << "you?"; std::cout << std::endl;
}
