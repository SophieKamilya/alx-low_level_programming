#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: a string
 * @src: a string
 * @n: integer
 * Return: final string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0')
	{
		if (i == n)
			break;
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
