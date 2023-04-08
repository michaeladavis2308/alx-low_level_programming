#include "lists.h"
/**
 * listint_len- gives the number of elements in a linked list
 * @h:a pointer to the first node of the linked list
 * Return:number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h != 0)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
