#include <unistd.h>
#include <string.h>

/**
 * main - Printing a quote to the std error
 * q: a string containing the quote
 * Return: 1
*/

int main(void)
{
	char q[100] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, &q, strlen(q));
	return (1);
}
