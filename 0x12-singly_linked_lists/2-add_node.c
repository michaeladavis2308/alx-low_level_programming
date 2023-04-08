#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node- adds a new node at the beginning of the linked list
 * @str: string to be added to the list.
 * @head: the pointer to the linked list.
 * Return:address of the new node / NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t len_t;
	list_t *new_node;

	new_node =(list_t *) malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	len_t = 0;
	while (str[len_t] != 0)
	{
		len_t++;
	}
	new_node->len = len_t;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
