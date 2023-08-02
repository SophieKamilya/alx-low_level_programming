#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n:int
 * Return: int
 */

int factorial(int n)
{
	int f = 1;


	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	f = n * factorial(n - 1);
	return (f);
}
