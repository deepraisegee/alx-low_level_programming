#ifndef DOG_H
#define DOG_H

/**
 *dog_t - typedef for dog structure
 */
typedef struct dog dog_t;

/**
  * struct dog - a structure for dog
  * @name: pointer
  * @age: integer
  * @owner: pointer
  *
  * Description: structure for dog
  */
struct dog
{
	char *name;
	float age;
	char *owner;
}

#endif
