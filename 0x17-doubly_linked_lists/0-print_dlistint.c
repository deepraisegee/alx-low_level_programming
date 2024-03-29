#include <stdio.h>
#include "lists.h"

/**
  * print_dlistint - prints all the elements of a dlistint_t list.
  * @h: head node
  *
  * Return: the number of nodes.
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (!h)
		return (-1);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
