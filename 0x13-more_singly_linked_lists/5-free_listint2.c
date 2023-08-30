#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer of the concerned list
 */
void free_listint2(listint_t **head)
{
	listint_t *list1;

	if (head == NULL)
		return;

	while (*head)
	{
		list1 = (*head)->next;
		free(*head);
		*head = list1;
	}

	*head = NULL;
}

