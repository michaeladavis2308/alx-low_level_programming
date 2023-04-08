#include "lists.h"
/**
 * sum_listint - Calculates the sum of all the
 *               data (n) of a linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: 0\the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
