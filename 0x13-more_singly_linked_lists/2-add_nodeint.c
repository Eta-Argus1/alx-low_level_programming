#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @head: pointer to the list
 * @n: nodes to add
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *list1;

	list1 = malloc(sizeof(listint_t));
	if (!list1)
		return (NULL);

	list1->n = n;
	list1->next = *head;
	*head = list1;

	return (list1);
}
