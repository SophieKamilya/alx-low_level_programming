#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10,
 * starting from 0 with putchar
 * i: loop variable
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(48 + i);
	putchar('\n');
	return (0);
}
