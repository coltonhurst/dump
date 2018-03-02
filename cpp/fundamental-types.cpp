/*
	There are 5 fundamental types in C++
	bool
	char
	int
	float
	void
	
	sizeof(x) returns the size of x in bytes
	
	Note 1:
	\t is the escape sequence for a tab
	Basically, in this case, a simple way to make the output more readable!
	
	Note 2:
	There are also modifiers. For example, the type: 'double'
	While 'float' is usually 4 bytes, 'double' is usually '64' bytes
	Or, 'long long int', which is also usually '64' bits
*/

#include <iostream>

int main()
{
	// Fundamental Types
	std::cout << "C++ Fundamental Data Types (in bytes)" << std::endl;
	std::cout << "Size of bool:\t\t" << sizeof(bool) << std::endl;
	std::cout << "Size of char:\t\t" << sizeof(char) << std::endl;
	std::cout << "Size of int:\t\t" << sizeof(int) << std::endl;
	std::cout << "Size of float:\t\t" << sizeof(float) << std::endl;
	// You can't output sizeof(void), as it's an "incomplete type"
	
	return 0;
}