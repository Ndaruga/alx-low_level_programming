#include "stdio.h"
#include "dog.h"
#include "stdlib.h"

/**
 * init_dog - function
 * struct dog - structure of dog
 * @d: the new dog
 * @name: name of new dog
 * @age: age of dog
 * @owner: ownwer of dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->owner = owner;
	d->age = age;
}
