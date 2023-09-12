#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints struct dog
 *
 */

void print_dog(struct *d)
{
	if (d == NULL)
		return;
	printf("Name: ");
	if (d->name == NULL)
		printf("(nil)\n");
	else if (d->name != NULL)
		printf("%s\n", d->name);
	printf("Age: ");
	if (d->age == NULL)
		printf("(nil)\n");
	else if (d->!= NULL)
		printf("%d\n", d->age);
	printf("Owner: ");
	if (d->owner == NULL)
		printf("(nil)\n");
	else if (d->owner != NULL)
		printf("%s\n", d->owner);
}
