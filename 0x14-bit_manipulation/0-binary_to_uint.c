#include "main.h"

/**
 * binary_to_uint - function that converts
 *  a binary number to an unsigned int
 *  @b: string of binary numbers
 *  Return: the converted number
 *   or 0 if b is NULL
 *   or b contains other than 0 and 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, d = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
			d = d << 1;
		if (b[i] == '1')
			d = 1 | (d << 1);
		if (b[i] != '1' && b[i] != '0')
			return (0);
	}
	return (d);
}
