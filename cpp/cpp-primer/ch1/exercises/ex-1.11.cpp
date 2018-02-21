#include <iostream>

// this program assumes we don't need input validation, etc.

int main()
{
    int num1, num2;
    std::cout << "Please enter 2 numbers, where the first is less than the second..." << std::endl;
    std::cin >> num1 >> num2;
    std::cout << std::endl;
    while (num1 <= num2) {
        std::cout << num1 << std::endl;
        ++num1;
    }
    return 0;
}