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
	size_t count = 1;

	if (h->str == NULL)
		printf("[0] (nil)\n");

	do {
		printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	} while (h->next);

	return (count);
}
