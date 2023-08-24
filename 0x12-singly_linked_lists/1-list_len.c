#include "lists.h"

/**
 * list_len - a function that returns the number
 * of elements in a linked list_t list
 * @h: a pointer to a constant list_t list
 * Return: size_t number of elements of a list_t list
 */
size_t list_len(const list_t *h)
{
	size_t l = 0;

	if (h == NULL)
		return (l);
	l += 1;
	return (list_len(h->next) + l);
}
