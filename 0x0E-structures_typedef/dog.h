#ifndef DOG_H
#define DOG_H

#include <stddef.h>

/**
 * struct dog - A struct representing a dog with a name, age, and owner
 * @name: The name of the dog (a string)
 * @age: The age of the dog (a float)
 * @owner: The name of the dog's owner (a string)
 *
 * Description: This struct represents a dog with a name, age, and owner.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* Function prototypes */

void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif /* DOG_H */

