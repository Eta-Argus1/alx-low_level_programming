#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: pointer of the pointer of the lists
 * @str: pointer of the string
 * Return: the new element or null
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *list;
	unsigned int len = 0;

	while (str[len])
		len++;

	list = malloc(sizeof(list_t));
	if (!list)
		return (NULL);

	list->str = strdup(str);
	list->len = len;
	list->next = (*head);
	(*head) = list;

	return (*head);
}

