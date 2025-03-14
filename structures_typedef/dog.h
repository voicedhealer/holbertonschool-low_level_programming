#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - Base Struct of the code
 * @name: Pointer to string for determinate the name of the dog
 * @age: Variable to float for determinate the age of the dog
 * @owner: Pointer to string for determinate the owner of the dog
 * Return: 0 Success
 */
	struct dog
	{
		char *name;
		float age;
		char *owner;
	};
	typedef struct dog my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H_ */