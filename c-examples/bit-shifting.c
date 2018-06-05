#include <stdio.h>
#include <stdint.h>

/* Extremely basic bit shifting */

int main()
{
	int8_t number = -16;
	printf("Our number is %d\n", number);

	printf("Executing %d >> 1\n", number);
	number = number >> 1;
	printf("result: %d\n", number);

	printf("Executing %d << 2\n", number);
	number = number << 2;
	printf("result: %d\n", number);

	return 0;
}
