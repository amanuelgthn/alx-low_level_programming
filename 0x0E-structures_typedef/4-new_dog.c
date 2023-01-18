#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"dog.h"
/**
 * new_dog- new struct of dog_t type named new dog
 * @name:name of the new dog
 * @age: age of the new dog
 * @owner:owner of the new dog
 * Return: new dog
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int lenowner;
	int lenname;

	lenowner = strlen(owner);
	lenname = strlen(name);
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->name = malloc(lenname + 1);
	if (newdog->name == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	else
	{
		strcpy(newdog->name, name);
	}
	newdog->owner = malloc(lenowner + 1);
	if (newdog->owner == NULL)
	{
		free(newdog->owner);
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	else
	{
		strcpy(newdog->owner, owner);
	}
	newdog->age = age;
	return (newdog);
}
