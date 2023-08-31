#include "main.h"

/**
 * print_binary - a function that prints
 *  the binary representation of a number.
 *  @n: unsigned long int n
 *  Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	while (mask != 0)
	{
		if (mask == 1 && n ^ mask)
			_putchar('0');
		if (n & mask)
		{
			while (mask != 0)
			{
				if (n & mask)
					_putchar('1');
				else
					_putchar('0');
				mask >>= 1;
			}
		}
		mask >>= 1;
	}
}
