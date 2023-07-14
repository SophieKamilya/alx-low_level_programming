#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers,
 * separated by "," and followed by a space,
 * printed in ascending order
 * i: loop variable
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
		if (i == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
