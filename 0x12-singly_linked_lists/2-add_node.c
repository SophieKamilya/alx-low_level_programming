#include "lists.h"
#include <string.h>

/**
 * add_node - a function that adds a new
 *  node at the beginning of a list_t list
 * @head: a double pointer to the head of a list_t list
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = strlen(str);
	if (*head != NULL)
		temp->next = *head;
	else
		temp->next = NULL;
	*head = temp;
	return (*head);
}
