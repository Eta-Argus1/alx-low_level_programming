#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a list
 * @head: pointer to the list
 *
 * Return: the head node’s data (n)
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *list1;
	int i;

	if (!head || !*head)
		return (0);

	i = (*head)->n;
	list1 = (*head)->next;
	free(*head);
	*head = list1;

	return (i);
}
