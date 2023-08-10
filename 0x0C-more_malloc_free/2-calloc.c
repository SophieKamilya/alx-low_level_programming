#include "main.h"

/**
 * _calloc - allocates memeory for array using malloc
 * @nmemb:unsigned int
 * @size:unsigned int
 * Return:void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pt;
	unsigned int i;

	if ((size == 0) || (nmemb == 0))
		return (NULL);
	pt = malloc(nmemb * size);
	if (pt == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		pt[i] = 0;
	return (pt);
}
