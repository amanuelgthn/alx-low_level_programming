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
	if (d == NULL)
	{
		exit(0);
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	printf("Name: %s\n", d->name);
	if (d->age== float)
	{
		printf("Age: %f\n", d->age);
	}
	else
	{
		printf("Age:  0.000000\n");
	}
	printf("Owner: %s\n", d->owner);
}
