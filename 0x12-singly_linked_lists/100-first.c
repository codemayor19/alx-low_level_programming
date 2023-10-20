#include <stdio.h>

/**
 * comeBefore - print words before
 *
 */
void comeBefore(void) __attribute__ ((constructor));

void comeBefore(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
