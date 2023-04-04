#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: pointer to pointer of type listint_t
 * @index: unsigned int, index to remove
 * Remove: 1 on success else -1 for fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t = *head;
	listint_t *current = NULL;
	unsigned int k = 0;

	if (*head == NULL)
		return (-1);
	if (*head == NULL)	
	{
		*head = (*head)->next;
		free(t);
		return (1);
	}

	while (k < index - 1)
	{
		if (!t || !(t->next))
			return (-1);
		t = t->next;
		k++;
	}

	current = t->next;
	t->next = current->next;
	free(current);

	return (1);
}
