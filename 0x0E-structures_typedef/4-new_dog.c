#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - free dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: dog_t *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, ii, jj;
	dog_t *a;

	a = malloc(sizeof(dog_t));
	if (a == NULL)
		return (NULL);
	a->name = malloc(sizeof(dog_t));
	if (a->name == NULL)
		return (NULL);
	a->owner = malloc(sizeof(dog_t));
	if (a->owner == NULL)
		return (NULL);

	while (*(name + i))
	{
		i++;
	}

	while (*(owner + j))
	{
		j++;
	}

	for (ii = 0; ii <= i; ii++)
	{
		a->name[ii] = name[ii];
	}

	for (jj = 0; jj <= j; jj++)
	{
		a->owner[jj] = owner[jj];
	}

	a->age = age;

	return (a);
}
