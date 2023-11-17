#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node - adds a new node at the beginning of a list_t list.
  * @head: head of the node.
  * @str: node str data.
  *
  * Return: pointer to the new node.
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
