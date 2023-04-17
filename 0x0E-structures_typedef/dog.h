#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A struct representing a dog with a name, age, and owner
 * @name: The name of the dog (a string)
 * @age: The age of the dog (a float)
 * @owner: The name of the dog's owner (a string)
 *
 * Description: This struct represents a dog with a name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */

