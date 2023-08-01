include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s:string
 * @b:char
 * @n:unsigned integer
 * Return:pointer to string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
