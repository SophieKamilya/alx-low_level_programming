#include "main.h"

/**
 * _atoi -  convert a string to an integer
 * @s: string
 * Return: number int
 */

int _atoi(char *s)
{
	int i = 0, nums = 0, pow = 1, number = 0;
	int moins = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
			nums++;
		if (s[i] == '-')
			moins = 1;
		i++;
	}
	i = 0;
	nums--;
	while (i < nums)
	{
		pow *= 10;
		i++;
	}
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			switch (s[i])
			{
				case '0':
				number = number + (pow * 0);
				pow = pow / 10;
				break;
				case '1':
				number = number + (pow * 1);
				pow = pow / 10;
				break;
				case '2':
				number = number + (pow * 2);
				pow = pow / 10;
				break;
				case '3':
				number = number + (pow * 3);
				pow = pow / 10;
				break;
				case '4':
				number = number + (pow * 4);
				pow = pow / 10;
				break;
				case '5':
				number = number + (pow * 5);
				pow = pow / 10;
				break;
				case '6':
				number = number + (pow * 6);
				pow = pow / 10;
				break;
				case '7':
				number = number + (pow * 7);
				pow = pow / 10;
				break;
				case '8':
				number = number + (pow * 8);
				pow = pow / 10;
				break;
				case '9':
				number = number + (pow * 9);
				pow = pow / 10;
				break;

				default:
				break;
			}
		}
		i++;
	}
	if (moins == 1)
		number = -1 * number;
	return (number);
}
