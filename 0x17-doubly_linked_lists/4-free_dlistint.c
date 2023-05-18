#include "lists.h"

/**
  * free_dlistint - free a double linked list
  * @head: header of double linked list
  * Return: nothing
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *savepoint;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			savepoint = head->next;
			free(head);
			head = savepoint;
		}
	}
}
