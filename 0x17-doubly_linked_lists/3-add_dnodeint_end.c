#include "lists.h"

/**
 *add_dnodeint_end - Add new node at end
 *@head: Pointer to head
 *@n: Value of new node
 *Return: Address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	if ((*head)->next == NULL)
	{
		(*head)->next = new;
		new->prev = *head;
		return (new);
	}
	tmp = *head;
	while (tmp->next)
	{
		tmp = tmp->next;
		tmp->next = new;
		new->prev = tmp;
	}
	return (new);
}