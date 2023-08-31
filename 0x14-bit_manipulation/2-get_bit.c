#include "main.h"

/**
 * get_bit - a function that returns the value
 *  of a bit at a given index.
 * @n: the number
 * @index: the index of the bit
 * Return: the index.
 *  or -1 if failed
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	n >>= index;
	if (n & 1)
		return (1);
	else
		return (0);
}
