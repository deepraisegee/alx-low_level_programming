#ifndef DOG_H
#define DOG_H

/**
  * struct dog - A dog stucture
  * @name: name of the dog
  * @age: the dog age
  * @owner: the dog owner
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */
