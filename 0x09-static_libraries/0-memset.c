#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: string
 * @b: the constant
 * @n: number of bytes
 * Return: string filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *tmp = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*tmp = b;
		tmp++;
	}
	return (s);
}
