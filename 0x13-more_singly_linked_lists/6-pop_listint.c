#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 * Return: data inside the elements that was deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *t;

	int k;

	if (head == NULL || !(*head))
		return (0);
	t = *head;
	k = t->n;
	*head = t->next;
	free(t);

	return (k);
}
