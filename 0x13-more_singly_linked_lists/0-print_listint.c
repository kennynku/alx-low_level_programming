#include "lists.h"

/**
 * print_listint - printing contents of a string
 * @h: singly linked list
 * Return: print elements of the list
 */
size_t print_listint(const listint_t *h)
{
	int k;

	k = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		k++;
	}
	return (k);
}
