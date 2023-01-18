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
	if (d == 0)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
