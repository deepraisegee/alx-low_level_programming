#include <stdio.h>
#include "dog.h"

/**
  * new_dog - creates a new dog.
  * @name: dog name
  * @age: dog age
  * @owner: dog owner
  *
  * Return: pointer to the new created dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
