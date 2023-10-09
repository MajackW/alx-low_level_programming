#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialises dog
 * @d: dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
