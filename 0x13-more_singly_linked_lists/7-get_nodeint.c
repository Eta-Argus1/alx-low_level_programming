#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a list
 * @head: first node in the linked list
 * @index: index of the node to return
 * Return: pointer to the concerned node if not NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *list1 = head;

	while (list1 && i < index)
	{
		list1 = list1->next;
		i++;
	}

	return (list1 ? list1 : NULL);
}
