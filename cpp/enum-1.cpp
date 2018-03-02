/*
	Enumerations Example #1
	The more basic example!
	
	Enumeration type- a distinct type whose value
	is restricted to a certain range of values.
	
	Objects of these enumerated types take any of the
	enumerations as a value.
*/

#include <iostream>

int main()
{
	// Create the enum type colors_t
	// The enumerations of colors_t are in the brackets { }
	enum colors_t {red, orange, yellow, green, blue, indigo, violet};
	
	// Create a variable of type colors_t
	// B/c colors_t is an enum, cList can only hold the specified enumerations
	// that were defined above on line 17
	colors_t cList;
	
	// Give cList the value red!
	// Note, this also has an int value behind the scenes
	// red is the first, which defaults to 0, as we didn't specify a value for the enumeration 'red'
	cList = red;
	
	if (cList == red)
		std::cout << "red was picked!" << std::endl;
	
	// Show the int value of cList
	std::cout << cList << std::endl;	// outputs 0
	
	return 0;
}