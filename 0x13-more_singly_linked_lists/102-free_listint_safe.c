#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 * Return: num of elem in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t b = 0;
	int ho;
	listint_t *t;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		ho = *h - (*h)->next;

		if (ho > 0)
		{
			t = (*h)->next;
			free(*h);
			*h = t;
			b++;
		}
		else
		{
			free(*h);
			*h = NULL;
			b++;
			break;
		}
	}

	*h = NULL;
	return (b);
}
