/* Fun with malloc()! Yay for memory! */

#include <stdio.h>

int main()
{
    /* create the pointer */
    int *p;

    /* allocate the memory, and cast the void* that's returned to be an int* */
    p = (int *)malloc(sizeof(int));

    /* tell the user what we did, give 'em some info */
    printf("We just allocated memory for 1 int, which is %d bytes of memory on this system!\n", sizeof(int));
    printf("This is the integer representation of what the memory we allocated: %d\n", *p);

    /* set the memory to 0 */
    *p = 0;

    /* tell the user what we did! */
    printf("Now, the value is: %d\n", *p);

    /* free dat memory */
    free(p);

    return 0;
}
