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
	if (d == NULL)
	{
		free(d);
	}
	if (d->name == NULL)
	{
		free(d->name);
		free(d);
	}
	if (d->owner == NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
