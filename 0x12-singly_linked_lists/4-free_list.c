#include "lists.h"
#include <stdlib.h>
/**
 * free_list- frees a linked list
 * @head:the pointer to the first node.
 * Return:void
 */
void free_list(list_t *head)
{
	list_t *nodes;

	while (head != NULL)
	{
		nodes = head;
		head = head->next;
		free(nodes->str);
		free(nodes);
	}
}
