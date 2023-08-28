#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - a function that deletes the head
 *  of listint_t list
 * @head: double pointer to a listint_t list
 * Return: the data of the head node
 * if the list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int d;

	if (*head == NULL || head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	d = temp->n;
	free(temp);
	return (d);
}
