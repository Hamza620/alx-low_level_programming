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
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - new type dog_t as a new name for the type struct dog
 */
typedef struct dog dog_t;


#endif
