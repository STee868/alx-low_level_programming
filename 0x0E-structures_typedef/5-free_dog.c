#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees memory allocated for a dog
 * @d: pointer to the dog structure
 *
 * This function takes a pointer to a dog structure and frees the memory
 * that was allocated for it using malloc.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
