#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that frees a list
 * @head: address of the first node of a list
 */
void free_listint(listint_t *head)
{
	listint_t *temp1, *temp2;

	temp = head;

	while (temp != NULL)
	{
		temp2 = temp->next;
		free(temp);
		temp = temp2
	}
}
