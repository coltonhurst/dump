#include <iostream>

int main()
{
    int sum = 0, counter = 50;
    while (counter <= 100) {
        sum += counter;
        ++counter;
    }
    std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;
    return 0;
}