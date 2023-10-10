#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print dog
 * @d: struct data
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			d->name = "(nill)";
		}
		if (d->owner == NULL) {
			d->owner = "(nill)";
		}
		printf("Name: %s\nAge: %f\nOwner: %s\n", name, age, owner);
	}
}
