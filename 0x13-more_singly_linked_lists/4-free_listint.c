#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: the list to free
 */
void free_listint(listint_t *head)
{
	listint_t *list1;

	while (head)
	{
		list1 = head->next;
		free(head);
		head = list1;
	}
}
