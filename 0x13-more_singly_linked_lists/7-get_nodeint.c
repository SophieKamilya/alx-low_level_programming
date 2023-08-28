#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth
 * node of a linked listint_t list
 * @head: pointer to a listint_t list
 * @index: unsigned int index starting from 0
 * Return: a pointer to the nth node
 *  or NULL if doesnt existe
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
