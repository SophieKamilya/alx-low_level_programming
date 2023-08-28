#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - a function that adds a new node
 * at the beginning of a listint_t list
 * @head: double pointer to tha first node
 * @n: const int value
 * Return: pointer to the new element
 * or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (*head != NULL)
		newnode->next = *head;
	else
		newnode->next = NULL;
	*head = newnode;
	return (*head);
}
