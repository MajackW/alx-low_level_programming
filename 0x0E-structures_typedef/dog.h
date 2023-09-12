#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - Typedef of struct dog
 * @name - name of dog
 * @woner - owner
 * @age - age
 */

struct dog
{
	/**
	 * @name: name
	 * @owner: owner
	 * @age: age
	 */
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
