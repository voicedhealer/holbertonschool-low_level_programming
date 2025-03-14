#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - Function for initialise a variable of type struct dog
 * @d: Pointer for give a new variable of the different information
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The Owner of the dog
 * Return: Always 0.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	if (name == NULL && owner == NULL)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}