/**
 * struct dog - structure des differents élements
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * description: nom, age et propriétaire d'un chien rentré par l'utilisateur
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);