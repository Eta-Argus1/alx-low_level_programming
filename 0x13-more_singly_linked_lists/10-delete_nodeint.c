#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at
 * index index of a listint_t linked list
 * @head: pointer to the list
 * @index: index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *list1 = *head;
	listint_t *list2 = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(list1);
		return (1);
	}

	while (i < index - 1)
	{
		if (!list1 || !(list1->next))
			return (-1);
		list1 = list1->next;
		i++;
	}


	list2 = list1->next;
	list1->next = list2->next;
	free(list2);

	return (1);
}
