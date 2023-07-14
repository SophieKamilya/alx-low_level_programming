#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * i: loop variable
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
		putchar(97 + i);
	putchar('\n');
	return (0);
}
