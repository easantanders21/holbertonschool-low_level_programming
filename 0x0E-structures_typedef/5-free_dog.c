#include <stdio.h>
#include "dog.h"
/**
 * free_dog - free dog
 * @d: pointer to structure
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d);
}
