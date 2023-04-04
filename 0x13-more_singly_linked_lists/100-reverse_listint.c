#include "lists.h"

/**
 * reverse_listint - function
 * Description: reverses a listint_t linked list
 * @head: pointer to the first node in the list
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *k = NULL, *p;

	if (!*head)
		return (0);

	while ((*head)->next != NULL)
	{
		p = (*head)->next;
		(*head)->next = k;
		k = (*head);
		(*head) = p;
	}
	(*head)->next = k;
	return (*head);
}
