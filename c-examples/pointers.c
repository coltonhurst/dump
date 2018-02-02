/*
  A simple pointer example in C, with lots of comments!
*/

#include <stdio.h>

int main()
{
    /* create a variable */
    int number = 8;

    /* create the integer pointer */
    int *int_pointer;

    /* set the pointer equal to the address (location) of number */
    ip = &number;

    /* print the address of the number variable */
    printf("Address of number variable: %x\n", &number);

    /* print the address stored in the int pointer */
    printf("Address stored in ip variable: %x\n", ip );

    /* through the int pointer, get the value at it's stored address */
    /* this is the same value as number! yay pointers! */
    printf("Value of *ip variable: %d\n", *ip );

   return 0;
}
