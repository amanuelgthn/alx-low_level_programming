#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"dog.h"
/**
 * free_dog- free dog struct
 * @d:name of the new dog
 * Return:d
 **/
void free_dog(dog_t *d)
{
	int lenowner;
	int lenname;

	lenowner = strlen(d->owner);
	lenname = strlen(d->name);
	d= malloc(sizeof(dog_t));
	if (d == NULL)
	{
		free(d);
	}
	d->name = malloc(lenname + 1);
	if (d->name == NULL)
	{
		free(d->name);
		free(d);
	}
	d->owner = malloc(lenowner + 1);
	if (d->owner == NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
