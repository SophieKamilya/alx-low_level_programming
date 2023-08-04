#include "main.h"

/**
 * _strchr -  locates a character in a string
 * @s: string
 * @c: char
 * Return: pointer to the first occurence of c or NULL
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == c)
		return (s);
	return (NULL);
}
