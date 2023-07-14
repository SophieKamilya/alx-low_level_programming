#include <stdio.h>

/**
 * main - prints all  numbers of base 16,
 * starting from 0 with putchar
 * i: loop variable
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(48 + i);
	for (i = 0; i < 6; i++)
		putchar(97 + i);
	putchar('\n');
	return (0);
}
