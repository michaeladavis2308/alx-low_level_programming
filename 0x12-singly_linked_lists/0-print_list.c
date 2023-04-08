#include "lists.h"
#include <stdio.h>
/**
 * print_list- prints all the elements the list
 * @h: the pointer to the singly list
 * Return: The list(the elements of the node)
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		n++;
	}
	return (n);
}
