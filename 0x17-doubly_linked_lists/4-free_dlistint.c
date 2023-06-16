#include "lists.h"

/**
 *free_dlistint - Free al double list
 *@head: Pointer  to head
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}