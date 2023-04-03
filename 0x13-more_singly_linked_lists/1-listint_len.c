#include "lists.h"

/**
 * listint_len - fuction that returns num of elemts in a linked listint_t list
 * @h: singly linked list
 * Return: num of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int a;

	a = 0;

	while (h != NULL)
	{
		h = h->next;
		a++;
	}
	return (a);
}
