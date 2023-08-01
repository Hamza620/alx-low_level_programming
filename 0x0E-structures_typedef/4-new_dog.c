#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: dog's owner name's
 * Return: newly created dog_t or NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);
	n_dog->name = malloc(strlen(name) + 1);
	n_dog->owner = malloc(strlen(owner) + 1);
	if (n_dog->name == NULL || n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog->owner);
		free(n_dog);
		return (NULL);
	}
	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	n_dog->age = age;
	return (n_dog);
}
