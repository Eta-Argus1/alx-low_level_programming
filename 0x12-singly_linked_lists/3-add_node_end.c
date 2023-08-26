#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: pointer of the pointer of list
 * @str: the string
 * Return: address of the list, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *list;
	list_t *list_temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	list = malloc(sizeof(list_t));
	if (!list)
		return (NULL);

	list->str = strdup(str);
	list->len = len;
	list->next = NULL;

	if (*head == NULL)
	{
		*head = list;
		return (list);
	}

	while (list_temp->next)
		list_temp = list_temp->next;

	list_temp->next = list;

	return (list);
}

