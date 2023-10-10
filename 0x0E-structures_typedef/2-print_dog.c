#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print dog
 * @d: struct data
 */
void print_dog(struct dog *d)
{
	char *name, *owner, *n == (nil);
	float age;

	if (d != NULL)
	{
		if (d->name == NULL)
		{
			name = n;}
		else {
			name = d->name;
		}
		owner = d->owner;
		age = d->age;
		printf("Name: %s\nAge: %.1f\nOwner: %s\n", name, age, owner);
	}
}
