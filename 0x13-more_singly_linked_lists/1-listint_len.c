#include "lists.h"

/**
 * listint_len - a function that returns the number
 * of elements in a linked listint_t list
 * @h: pointer to a listint_t list
 * Return: size_t the number of elemnts in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t l = 0;

	if (h == NULL)
		return (l);
	l += 1;
	return (l + listint_len(h->next));
}
