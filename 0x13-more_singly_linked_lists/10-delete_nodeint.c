#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - a function that deletes a node
 *  at an index of listint_t list
 * @head: double pointer to a listint_t list
 * @index: node index
 * Return: 1 if success
 * if failed return -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *copy = *head;
	unsigned int i;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
	}

	temp = copy->next;
	copy->next = temp->next;
	free(temp);
	return (1);
}
