#include "lists.h"
/**
 *add_nodeint-adds a new node to the start to the linked list
 *@head:pointer to the first node of the list
 *@n:link address for the new node
 *Return: NULL or the address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);

	add->n = n;
	add->next = *head;
	*head = add;
	return (add);
}
