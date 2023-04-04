#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: linked list to search for
 * Return: address of the node where the loop starts else NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *d = head;
	listint_t *k = head;

	if (!head)
		return (NULL);

	while (d && k && k->next)
	{
		k = k->next->next;
		d = d->next;

		if (k == d)
		{
			d = head;

			while (d != k)
			{
				d = d->next;
				k = k->next;
			}
			return (k);
		}
	}
	return (NULL);
}
