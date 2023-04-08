#include "lists.h"
#include <stdio.h>
/**
 * print_listint -Prints all the elements of the linked list
 * @h: A pointer to the first node of the list.
 * Return: number of elements in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t elements = 0;

	while (h != 0)
	{
		elements++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (elements);
}
