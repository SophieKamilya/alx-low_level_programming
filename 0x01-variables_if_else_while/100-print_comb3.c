#include <stdio.h>

/**
 * main - prints all possible combinations of two-digit numbers,
 * separated by "," and followed by a space,
 * printed in ascending order
 * i: loop variable
 * j: loop variable
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 1 + i; j < 10; j++)
		{
			putchar(48 + i);
			putchar(48 + j);
			if (i == 8)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
