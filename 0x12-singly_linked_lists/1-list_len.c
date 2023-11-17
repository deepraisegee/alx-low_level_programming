#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * list_len - returns the elements of a list_t list.
  * @h: head of a node
  *
  * Return: the number of nodes
  */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
