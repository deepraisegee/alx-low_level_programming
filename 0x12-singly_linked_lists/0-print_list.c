#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * print_list - prints all the elements of a list_t list.
  * @h: head of a node
  *
  * Return: the number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[%u] (nil)\n", h->len);
			h = h->next;
			count++;
			continue;
		}
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}

	return (count);
}
