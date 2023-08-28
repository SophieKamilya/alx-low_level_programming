#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - a function that adds a new node
 * at the end of a listint_t list
 * @head: double pointer to tha first node
 * @n: const int value
 * Return: pointer to the new element
 * or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	if (*head != NULL)
		add_nodeint_end(&((*head)->next), n);
	else
	{
		*head = malloc(sizeof(listint_t));

		if (*head == NULL)
			return (NULL);
		(*head)->n = n;
		(*head)->next = NULL;
	}
	return (*head);
}
