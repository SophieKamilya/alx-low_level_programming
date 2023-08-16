#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array:int
 * @size:size_t
 * @action:pointer to function
 * Return:nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if ((array == NULL) || (size == 0) || (action == NULL))
	{
		return;
	}
	else
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
