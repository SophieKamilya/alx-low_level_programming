#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: string
 * @src: string
 * @n: number of bytes copied
 * Return: string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *tmp = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*tmp = *src;
		src++;
		tmp++;
	}
	return (dest);
}
