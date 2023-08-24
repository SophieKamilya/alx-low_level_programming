#include "lists.h"
#include <string.h>

/**
 * add_node_end - a function that adds a new
 * node at the end of a list_t list
 * @head: a double pointer to the head of a list_t list
 * @str: string
 * Return: pointer to the new element,
 * or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	if (*head != NULL)
	{
		add_node_end(&((*head)->next), str);
	}
	else
	{
		*head = malloc(sizeof(list_t));
		if (*head == NULL)
			return (NULL);
		(*head)->next = NULL;
		(*head)->str = strdup(str);
		(*head)->len = strlen(str);
	}
	return (*head);
}
