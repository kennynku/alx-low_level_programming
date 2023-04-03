#include "lists.h"

/**
 * free_listint2 - function that frees a list
 * @head: pointer to pointer of type listint_t
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		t = (*head)->next;
		free(*head);
		*head = t;
	}

	*head = NULL;
}
