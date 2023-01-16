#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"dog.h"
/**
 * init_dog-function initializing struct dog type dt
 * @name:name of the dog
 * @age:age of the dog
 * @owner:owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
