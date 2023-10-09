#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates new structure using dog_t
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 * Return: pointer to struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *dogg;

	dogg = malloc(sizeof(struct dog));
	if (dogg == NULL)
		return (NULL);
	dogg->name = name;
	dogg->owner = owner;
	dogg->age = age;
	return (dogg);
}
