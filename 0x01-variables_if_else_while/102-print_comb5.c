#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers,
 * separated by "," and followed by a space,
 * printed in ascending order
 * i: loop variable
 * j: loop variable
 * k: loop variable
 * l: loop variable
 * Return: 0
 */

int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				for (l = 0; l < 10; l++)
				{
					if (k == 0)
						continue;
					putchar(48 + i);
					putchar(48 + j);
					putchar(' ');
					putchar(48 + k);
					putchar(48 + l);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
