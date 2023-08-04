#include "main.h"

/**
 * _isalpha - checks if a char is alphabetic
 * @c: is the character to be checked
 * Return: 1 if alphabetic, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c < 97 + 26) || (c >= 65 && c < 65 + 26))
		return (1);
	else
		return (0);
}
