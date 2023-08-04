#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return:	0	if s1 = s2
 *		15	if s1 > s2
 *		-15	if s1 < s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (s1[i] && s2[j] && s1[i] == s2[j])
	{
		i++;
		j++;
	}
	if (s1[i] == s2[j])
		return (0);
	else
		return (s1[i] - s2[j]);
	return (0);
}
