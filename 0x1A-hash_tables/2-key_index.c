#include <stdio.h>
#include <stdlib.h>

#include "hash_tables.h"

/**
  * key_index - gives you the index of a key.
  * @key: the key
  * @size: he size of the array of the hash table
  *
  * Return: the index
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i = 0;
	int j;

	for (j = 0; key[j]; j++)
		i += key[j];

	return (i % size);
}
