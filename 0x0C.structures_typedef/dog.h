#ifndef DOG
#define DOG
#include <stdio.h>

/**
 * struct dog - A simple dog
 * @name: The name of the dog
 * @owner: The owner of the dog
 * @age: The age of the dog
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG */
