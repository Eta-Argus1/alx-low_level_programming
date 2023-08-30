#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: pointer to the list
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *list1 = NULL;
	listint_t *list2 = NULL;

	while (*head)
	{
		list2 = (*head)->list2;
		(*head)->list2 = list1;
		list1 = *head;
		*head = list2;
	}

	*head = list1;

	return (*head);
}
