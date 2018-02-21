# Chapter 1
### Exercise 1.1
Docs for naming conventions:
- [gcc man page](https://linux.die.net/man/1/gcc)
### Exercise 1.2
- Unless I'm doing something wrong, my system doesn't treat returning a -1 any differently than a 1.
### Exercises 1.3-1.5
- [Exercise 1.3](exercises/ex-1.3.cpp)
- [Exercise 1.4](exercises/ex-1.4.cpp)
- [Exercise 1.5](exercises/ex-1.5.cpp)
### Exercise 1.6
- The code fragment is illegal because of the semicolons.
### Exercise 1.7
- The program with incorrectly nested comments is [here](exercises/ex-1.7.cpp).
- Compilation output:
```
ex-1.7.cpp:9:1: warning: '/*' within block comment [-Wcomment]
/* hi! */
^
ex-1.7.cpp:11:2: error: expected unqualified-id
*/
 ^
1 warning and 1 error generated.
```
### Exercise 1.8
Here is the proposed code:
```cpp
#include <iostream>

int main()
{
    std::cout << "/*";
    std::cout << "*/";
    std::cout << /* "*/" */;
    std::cout << /*  "*/" /* "/*"  */;

    return 0;
}
```
Line three won't compile. [Here](exercises/ex-1.8.cpp) is the corrected code, and here is the output: ```/**/ */ /*```
### Exercise 1.9
- Answer: 3825
- See the [code](exercises/ex-1.9.cpp)
### Exercise 1.10
- See the [code](exercises/ex-1.10.cpp)
### Exercise 1.11
- See the [code](exercises/ex-1.11.cpp)
### Exercise 1.12
- The for loop sums the numbers -100 to 100, where the final sum is 0.
### Exercise 1.13
- Exercise 1.9
```cpp
#include <iostream>

int main()
{
    int sum = 0;
    for (int i = 50; i <= 100; ++i) {
        sum += i;
    }
    std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;
    return 0;
}
```
- Exercise 1.10
```cpp
#include <iostream>

int main()
{
    int num = 10;
    for (int i = 10; i >= 0; --i) {
        std::cout << i << std::endl;
    }
    return 0;
}
```
- Exercise 1.11
```cpp
#include <iostream>

// this program assumes we don't need input validation, etc.

int main()
{
    int num1, num2;
    std::cout << "Please enter 2 numbers, where the first is less than the second..." << std::endl;
    std::cin >> num1 >> num2;
    std::cout << std::endl;
    for (int i = num1; i <= num2; ++i) {
        std::cout << i << std::endl;
    }
    return 0;
}
```

### Exercise 1.14
- I think the advantage of the for loop is that you have a counter built in, and the while is just on a conditional check. For numbers, the foor loop is often better. However, to read a file, I would use a while loop, because I don't know how many iterations are needed.
- From [Mooophy's repo](https://github.com/Mooophy/Cpp-Primer), a [similar question on Stack Overflow](https://stackoverflow.com/questions/2950931/for-vs-while-in-c-programming).
### Exercise 1.15
- Nothing to show for this exercise.
### Exercise 1.16
- See the [file](1.4.3.cpp).