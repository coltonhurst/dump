/*
	With 'typedef', you can create another name for an existing type.
	
	In the example below, we add another name for 'int'
*/

#include <iostream>

int main()
{
	typedef int bacon;
	
	bacon thisIsTheVariableName = 5;
	
	std::cout << thisIsTheVariableName << std::endl;	// outputs 5
	
	return 0;
}