#include "lists.h"
/**
 * add_nodeint_end- adds new node to the end of the linked list
 * @head:a pointer to the address of the first node of linked list
 * @n: link address to new node
 * Return: NULL/ address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *first, *last;

	first = malloc(sizeof(listint_t));
	if (first == NULL)
		return (NULL);

	first->n = n;
	first->next = NULL;
	if (*head == NULL)
		*head = first;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = first;
	}
	return (*head);
}
