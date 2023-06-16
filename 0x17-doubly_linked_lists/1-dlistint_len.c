#include "lists.h"

/**
 *dlistint_len - Number of elements in a list
 *@h: Pointer to head
 *Return: Nodes count
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t size;

	size = 0;
	if (h == NULL)
		return (size);
	while (h)
	{
		size++;
		h = h->next;
	}
	return (size);
}