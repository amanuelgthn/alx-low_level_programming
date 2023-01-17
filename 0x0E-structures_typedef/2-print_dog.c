#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"dog.h"
/**
*print_dog- Print the struct dog d
*@d:struct dog d
**/
void print_dog(struct dog *d)
{
	if (d == NULL || d == 0)
	{
		return;
	}
	else
	{
		if (d->name == NULL)
		{
			d->name = "(nil)";
		}
		if (d->owner == NULL)
		{
			d->owner = "(nil)";
		}
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
