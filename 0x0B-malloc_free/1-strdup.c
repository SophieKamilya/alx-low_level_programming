#include "main.h"

/**
 * _strdup - returns a pointer to a new space of a copy string
 * @str:string
 * Return:string
 */

char *_strdup(char *str)
{
	int len = 0, i;
	char *pt;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i]; i++)
			len++;
		pt = malloc(len + 1);
		if (pt == NULL)
			return (NULL);
		for (i = 0; i < len; i++)
		{
			pt[i] = str[i];
		}
		pt[len] = '\0';
	}
	return (pt);
}
