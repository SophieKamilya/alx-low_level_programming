#include "main.h"

/**
 * clear_bit - a finction that sets the value
 *  of a bit to 0 at a given index.
 * @n: pointer to the number
 * @index: the index of the bit
 * Return: 1 if it works.
 *  -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = 1UL << index;
	if (*n & mask)
		*n = mask ^ *n;
	return (1);
}
