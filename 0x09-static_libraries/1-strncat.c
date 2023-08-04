#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: a string
 * @src: a string
 * @n: integer
 * Return: final string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, l = 0;
	char *pt = dest;

	while (dest[l] != '\0')
		l++;
	while (src[i] != '\0')
	{
		if (i == n)
			break;
		dest[l] = src[i];
		l++;
		i++;
	}
	dest[l] = '\0';
	return (pt);
}
