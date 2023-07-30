#ifndef DOG_H
#define DOG_H

/**
 * dog - struct
 * @name: name input
 * @age: age input
 * @owner: owner's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog my_dog;
#endif
