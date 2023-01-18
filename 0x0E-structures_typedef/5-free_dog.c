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

	lenowner = strlen(owner);
	lenname = strlen(name);
	d= malloc(sizeof(dog_t));
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	d->name = malloc(lenname + 1);
	if (d->name == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	newdog->owner = malloc(lenowner + 1);
	if (newdog->owner == NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
		return (NULL);
	}
	return (d);
}
