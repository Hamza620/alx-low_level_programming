#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct for a dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner's name
 *
 * Description: structure provides a way to store information about a dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;

#endif
