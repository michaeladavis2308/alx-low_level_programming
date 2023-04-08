#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at a given
 *                           index of a linked list.
 * @head: A pointer to the address of the
 *        head of the list.
 * @index: The index of the node to be deleted - indices start at 0.
 *
 * Return: On success - 1.
 *         On failure - -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *list, *duplicate;
	unsigned int node;

	duplicate = *head;
	if (duplicate == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(duplicate);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (duplicate->next == NULL)
			return (-1);

		duplicate = duplicate->next;
	}

	list = duplicate->next;
	duplicate->next = list->next;
	free(list);
	return (1);
}
