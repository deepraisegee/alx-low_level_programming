#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node_end - adds a new node at the end of a list_t list.
  * @head: head of the node.
  * @str: node str data.
  *
  * Return: pointer to the new node.
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node = *head;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (last_node)
	{
		while (last_node->next)
			last_node = last_node->next;

		last_node->next = new_node;

		return (new_node);
	}

	*head = new_node;

	return (new_node);
}
