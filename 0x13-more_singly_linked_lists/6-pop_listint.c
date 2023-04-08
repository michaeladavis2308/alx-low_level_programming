#include "lists.h"
/**
 * pop_listint - Deletes the head node of a linked list.
 * @head: A pointer to the address of the
 *        head of the list.
 *
 * Return: 0\Otherwise - The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *list;
	int data;

	if (*head == NULL)
		return (0);

	list = *head;
	data = (*head)->n;/*n denotes the data of the node */
	*head = (*head)->next;

	free(list);

	return (data);
}
