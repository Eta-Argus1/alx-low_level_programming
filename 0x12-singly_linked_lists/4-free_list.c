4-free_list.c

#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: he list
 */
void free_list(list_t *head)
{
	list_t *list_temp;

	while (head)
	{
		list_temp = head->next;
		free(head->str);
		free(head);
		head = list_temp;
	}
}
