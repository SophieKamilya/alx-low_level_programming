#include "main.h"

/**
 * _isupper - checkes if a char is an upper case
 * @c: char
 * Return: 1 if char, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
