#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest:pointer to char
 * @src:pointer to char
 * @n:area limit
 * Return:pointer to char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
