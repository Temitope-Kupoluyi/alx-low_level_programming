#include "main.h"

/**
 * swap-int - This functions swaps the value of two integers.
 * @a: pointer 1
 * @b: pointer 2
 */

void swap_int(int *a, int *b)
{
	int k = *a;
	*a = *b;
	*b = k;
}
