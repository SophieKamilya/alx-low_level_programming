#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - a function that inserts a new
 * node at a given position in a linked listint_t list
 * @head: double pointer to a listint_t list
 * @idx: unsigned int index starting from 0
 * @n: data of the new node
 * Return: a pointer to the new node
 *  or NULL if failed or impossible to add a new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	temp = *head;
	if (idx == 0)
	{
		newnode->next = temp;
		newnode->n = n;
		*head = newnode;
		return (newnode);
	}
	for (i = 0; i < idx - 1; i++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);
		temp = temp->next;
	}
	newnode->n = n;
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}
