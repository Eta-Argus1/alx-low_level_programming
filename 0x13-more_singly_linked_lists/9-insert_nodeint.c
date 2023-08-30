#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a given position
 * @head: pointer to list
 * @idx: where the new node is added
 * @n: data to insert into it
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *list1;
	listint_t *list2 = *head;

	list1 = malloc(sizeof(listint_t));
	if (!list1 || !head)
		return (NULL);

	list1->n = n;
	list1->next = NULL;

	if (idx == 0)
	{
		list1->next = *head;
		*head = list1;
		return (list1);
	}

	for (i = 0; list2 && i < idx; i++)
	{
		if (i == idx - 1)
		{
			list1->next = list2->next;
			list2->next = list1;
			return (list1);
		}
		else
			list2 = list2->next;
	}

	return (NULL);
}
