#include "main.h"

/**
 * malloc_checked - Write a function that allocates memory using malloc
 * @b:unsigned int
 * Return:void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *pt;

	pt = malloc(b);
	if (pt == NULL)
	{
		exit(98);
	}
	return (pt);
}
