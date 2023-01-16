#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"dog.h"
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
