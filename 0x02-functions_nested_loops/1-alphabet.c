#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: Prints alpabets
 * Return: void
 */

void print_alphabet(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}

