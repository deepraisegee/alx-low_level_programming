
#include "dog.h"

/**
 *init_dog - initializes a variable of type struct dog
 *@d: dog structure
 *@name: char type
 *@age: float type
 *@owner: char type
 *
 *Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
