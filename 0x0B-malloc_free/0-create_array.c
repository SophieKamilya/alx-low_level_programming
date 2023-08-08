#include "main.h"

/**
 * create_array - creates an array of chars with specific char
 * @size:unsigned int
 * @c:char
 * Return:string
 */

char *create_array(unsigned int size, char c)
{
	char *pt;
	unsigned int i = 0;

	if (size == 0)
	{
		pt = NULL;
	}
	else
	{
		pt = malloc(size);
		if (pt == NULL)
			return (NULL);
		while (i < size)
		{
			pt[i] = c;
			i++;
		}
		pt[size] = '\0';
	}
	return (pt);
#include "main.h"

/**
 *  * create_array - creates an array of chars with specific char
 *   * @size:unsigned int
 *    * @c:char
 *     * Return:string
 *      */

char *create_array(unsigned int size, char c)
{
	char *pt;
	unsigned int i = 0;

	if (size == 0)
	{
			pt = NULL;
	}
	else
	{
			pt = malloc(size);
			if (pt == NULL)
				return (NULL);
			while (i < size)
			{
						pt[i] = c;
						i++;
			}
			pt[size] = '\0';
	}
	return (pt);
}
