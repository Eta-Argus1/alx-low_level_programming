#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: pointer to the list
 * @n: the data
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *list1;
	listint_t *list2 = *head;

	list1 = malloc(sizeof(listint_t));
	if (!list1)
		return (NULL);

	list1->n = n;
	list1->next = NULL;

	if (*head == NULL)
	{
		*head = list1;
		return (list1);
	}

	while (list2->next)
		list2 = list2->next;

	list2->next = list1;

	return (list1);
}
