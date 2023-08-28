#include "lists.h"

/**
 * sum_listint - a function that returns the sum
 * of all data elements in a linked listint_t list
 * @head: pointer to a listint_t list
 * Return: int the sum of elements in the list
 */
int sum_listint(listint_t *head)
{
	int s = 0;

	if (head == NULL)
		return (s);
	s = head->n;
	return (s + sum_listint(head->next));
}
