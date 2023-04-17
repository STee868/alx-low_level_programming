#include "dog.h"
#include <stdlib.h>
/**
 * main - Entry point for the program
 *
 * This program demonstrates the usage of the free_dog function
 * to free the memory allocated for a dog_t struct.
 *
 * Return: Always 0
 */
int main(void)
{
	dog_t *my_dog = new_dog("Buddy", 2.5, "John");

	if (my_dog == NULL)
	{
		return (1);
	}
	print_dog(my_dog);

	free_dog(my_dog);

	return (0);
}

