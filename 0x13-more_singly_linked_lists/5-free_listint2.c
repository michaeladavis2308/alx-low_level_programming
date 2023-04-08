#include "lists.h"
/**
 * free_listint2 - Frees a linked list.
 * @head: A pointer to the address of the
 *        head of the linked list.
 *.
 */
void free_listint2(listint_t **head)
{
	listint_t *list;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		list = (*head)->next;
		free(*head);
		*head = list;
	}

	head = NULL;
}
