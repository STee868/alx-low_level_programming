#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - creates a new dog with the given name, age, and owner
 * @name: pointer to a string with the dog's name
 * @age: the dog's age
 * @owner: pointer to a string with the dog's owner
 *
 * Return: pointer to the new dog, or NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    /* Allocate memory for the dog */
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}
	/* Copy the name and owner strings */
	new_dog->name = malloc(strlen(name) + 1);

	if (new_dog->name == NULL)
	{
		free(new_dog);

		return (NULL);
	}
	strcpy(new_dog->name, name);
	new_dog->owner = malloc(strlen(owner) + 1);

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->owner, owner);
	/* Assign the age */
	new_dog->age = age;

	return (new_dog);
}

