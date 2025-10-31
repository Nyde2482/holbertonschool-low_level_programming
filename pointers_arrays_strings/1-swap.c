#include "main.h"

/**
 * swap_int - swap the value of *a and *b
 * @a: pointer of a
 * @b: pointer of b
 */

void swap_int(int *a, int *b)

{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}
