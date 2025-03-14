#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @a: pointer to struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: init_dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    struct init_dog *dog;

init_dog = malloc(sizeof(struct init_dog));
if (init_dog == NULL)
    return (NULL);
dog->name = name;
dog->age = age;
dog->owner = owner;
return init_dog;
}
