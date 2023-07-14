#include <stdio.h>

/**
 * main - prints all possible combinations of three-digit numbers,
 * separated by "," and followed by a space,
 * printed in ascending order
 * i: loop variable
 * j: loop variable
 * k: loop variable
 * Return: 0
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 1 + i; j < 10; j++)
		{
			for (k = 1 + j; k < 10; k++)
			{
				putchar(48 + i);
				putchar(48 + j);
				putchar(48 + k);
				if (i == 7)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
