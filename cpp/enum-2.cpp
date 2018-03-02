/*
	Enumerations Example #2
	A bit more complex than #1, but not really
*/

#include <iostream>

int main()
{
	
	// Create the enum type colors_t
	// Give the enumerations values
	enum colors_t {red=5, orange=10, yellow=15, green=20, blue=25, indigo=30, violet=35};
	
	// Create a variable of type colors_t
	colors_t cList;
	
	// Give cList the value red
	cList = green;
	
	// If it has the same enum value as green
	if (cList == 20)
		std::cout << "green was picked!" << std::endl;
	
	// Show the int value of cList
	std::cout << cList << std::endl;	// outputs 20
	
	return 0;
}