#include "lists.h"

/**
  * listint_len - prints all the elements of a listint_t list.
  * @h: head of the list
  *
  * Return: the number of elements in a linked listint_t list.
  */
size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	if (h == NULL)
		return (-1);

	while (h)
	{
		h = h->next;
		c += 1;
	}

	return (c);
}
