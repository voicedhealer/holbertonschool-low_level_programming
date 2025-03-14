#include "dog.h"

/**
 * init_dog - Initialise une structure dog
 * @d: Pointeur vers la structure à initialiser
 * @name: Nom du chien (chaîne de caractères)
 * @age: Âge du chien (nombre décimal)
 * @owner: Propriétaire du chien (chaîne de caractères)
 *
 * Description: Remplit les champs d'une structure dog existante
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
		if (d == NULL) /* Vérification cruciale */
				return;
		
		d->name = name;
		d->age = age;
		d->owner = owner;
}
