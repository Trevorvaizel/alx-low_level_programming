#include "lists.h"

/**
 * sum_dlistint - return sum of all the data
 * @head: pointer to head
 * Return: sum of all nodes
 **/
int sum_dlistint(dlistint_t *head)
{
	long int sum;
	dlistint_t *tmp;

	sum = 0;
	if (head == NULL)
	return (sum);

	tmp = head;
	while (tmp)
	{
	sum += tmp->n;
	tmp = tmp->next;
	}
	return (sum);
}
