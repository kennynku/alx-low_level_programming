#include "lists.h"

/**
 * delete_nodeint_at_index - function
 * Description: deletes the node at index of a listint_t linked list
 * @head: pointer to pointer of type listint_t
 * @index: unsigned int, index to remove
 * Remove: 1 on success else -1 for fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int k;
	listint_t *t, *prev = *head;

	if (prev == NULL || (prev->next == NULL && index != 0))
		return (-1);

	if (index != 0)
	{
		for (k = 0; (k < (index - 1)) && (prev != NULL); k++)
		{
			prev = prev->next;
		}
	}
	t = prev->next;

	if (index != 0)
	{
		prev->next = t->next;
		free(t);
	}
	else
	{
		free(prev);
		*head = t;
	}

	return (1);
}
