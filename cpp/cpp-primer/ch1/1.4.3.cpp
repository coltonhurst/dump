#include <iostream>

int main()
{
    int num = 0, sum = 0;
    while (std::cin >> num) {
        sum += num;
    }
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}

// How to send EOF (usually)
// on os x & unix, ctrl-d
// on windows, ctrl-z