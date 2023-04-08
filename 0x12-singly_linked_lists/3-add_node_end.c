#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node_end- adds a new node to the end of a linked list
 * @head:a pointer to the address of the first node
 * @str: data contained in the nodes
 * Return:address of new element / NULL.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t len_t;
	list_t *new_node, *end_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	len_t = 0;
	while (str[len_t])
	{
		len_t++;
	}
	new_node->len = len_t;
	new_node->next = NULL;

	end_node = *head;

	if (end_node == NULL)/*this is to access last node*/
	{
		*head = new_node;
	}
	else
	{
		while (end_node->next != NULL)
		{
			end_node = end_node->next;
		}
		end_node->next = new_node;
	}
	return (*head);
}
