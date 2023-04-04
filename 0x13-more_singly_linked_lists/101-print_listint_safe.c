#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - printing a listint_t linked list
 * @head: pointer to the head of the listint_t list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *d, *k, *dk;
	unsigned int b = 0, f = 0;

	if (head == NULL)
		return (0);
	dk = d = head;
	k = head->next;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		b++;

		if (f == 0 && k != NULL && k->next != NULL && d != NULL)
		{
			if (k == d)
			{
				f = 1;
				d = dk;
			}
			k = k->next->next;
		}
		if (f == 1 && d == head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
		d = d->next;
	}
	return (b);
}

