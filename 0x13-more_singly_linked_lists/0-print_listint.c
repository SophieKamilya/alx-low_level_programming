#include "lists.h"

/**
 * print_listint - write a function that prints
 * all the elements of a listint_t list
 * @h: a pointer to a listint_t list
 * Return: size_t the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t l = 0;

	if (h == NULL)
		return (l);
	printf("%d\n", h->n);
	l += 1;
	return (l + print_listint(h->next));
}
