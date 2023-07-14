#include <stdio.h>

/**
 * main - prints on reverse the alphabet in lowercase
 * i: loop variable
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 25; i >= 0; i--)
		putchar(97 + i);
	putchar('\n');
	return (0);
}
