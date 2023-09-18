#include "main.h"

/**
 * swap_int - swap two variables
 * @a: value pointer
 * @b: value pointer
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
