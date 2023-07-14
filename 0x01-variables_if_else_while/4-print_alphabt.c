#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except e & q
 * i: loop variable
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 97; i < 97 + 26; i++)
	{
		if (i == 'e' || i == 'q')
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
