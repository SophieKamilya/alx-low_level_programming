#include "main.h"

/**
 * main - Entry point
 * Description: prints '-putchar' followed by a new line
 * Return: Always 0 (success)
 */

int main(void)
{
	char word[] = "_putchar\n";
	int i = 0;

	while (word[i] != '\0')
	{
		_putchar(word[i]);
		i++;
	}
	return (0);
}
