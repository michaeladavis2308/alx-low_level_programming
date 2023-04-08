#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head:a pointer to the address of the first node of linked list.
 * Return:nothing
 */
void free_listint(listint_t *head)
{
	listint_t *list;

	while (head != NULL)
	{
		list = head->next;
		free(head);
		head = list;
	}
}
