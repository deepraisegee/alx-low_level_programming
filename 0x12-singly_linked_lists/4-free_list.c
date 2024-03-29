#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * free_list - frees a list_t list.
  * @head: head of the node
  *
  * Return: Noting
  */
void free_list(list_t *head)
{
	list_t *next;

	if (head == NULL)
		return;

	while (head)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}
