#include "stdio.h"
#include "dog.h"
#include "stdlib.h"

void init_dog(struct dog *d, char *name, float age, char *owner)
{
    d = malloc(sizeof(struct dog));
    d->name = name;
    d->owner = owner;
    d->age = age;
    free(d);
}