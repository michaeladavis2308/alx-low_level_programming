#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node to a linked
 *                           list at a given position.
 * @head: A pointer to the address of the
 *        head of the list.
 * @idx: The index of the listint_t list where the new
 *       node should be added - indices start at 0.
 * @n: The integer for the new node to contain.
 *
 * Return:NULL \the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *dup = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = dup;
		*head = new;
		return (new);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (dup == NULL || dup->next == NULL)
			return (NULL);

		dup = dup->next;
	}

	new->next = dup->next;
	dup->next = new;

	return (new);
}
