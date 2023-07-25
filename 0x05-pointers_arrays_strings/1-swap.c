#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: integer number 1
 * @b: integer number 2
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
