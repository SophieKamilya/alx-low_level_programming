#include "main.h"

/**
 * flip_bits - a function that returns the number of bits
 *  needede to go from a nuber to the other.
 *  @n: the first unsigned long int number
 *  @m: the second unsigned long int number
 *  Return: unsigned int the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask;
	unsigned int bits = 0;

	if (m == n)
		return (0);
	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	while (mask != 0)
	{
		if (mask & n)
		{
			if (!(mask & m))
			{
				bits++;
			}
		}
		if (mask & m)
		{
			if (!(mask & n))
			{
				bits++;
			}
		}
		mask >>= 1;
	}
	return (bits);
}
