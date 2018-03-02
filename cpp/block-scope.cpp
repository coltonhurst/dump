/*
    This program demonstrates blocks and scopes in C++.
    A block is a set of statements that are surrounded by the open/close braces {}
    They are useful for more than organizing statements!

    The scope of a variable is dependent where it is declared.

    An important note- local variables declared within a block are not accessible
    outside the block, because of the block's scope.

    In the example below, we set num1 to 5. Then, within the block, we set num2 to 10.
    If you try to compile this program, it won't work, because num2 was not declared in that scope!
    However, num1 was, so num1 is fine, but not num2.
*/

#include <iostream>

int main()
{
    int num1 = 5;
    std::cout << "Hi! I'm Bob. Who are you?\n\n";
    {
        std::cout << "My name is Joe.\n";
        std::cout << "I am 1,000 years old.\n\n";
        int num2 = 10;
    }
    std::cout << "Well, that's the end of the block!" << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    return 0;
}
