#include "lists.h"
/**
 * list_len -  a fxn that returns the elements in linked list
 * @h:first node to linked list
 * Return: number of nodes linked
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
