#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"dog.h"
/**
 * dog_t new_dog- new struct of dog_t type named new dog
 * @name:name of the new dog
 * @age: age of the new dog
 * @owner:owner of the new dog
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		free (newdog);
		return (NULL);
	}
	if (newdog->name == NULL)
	{
		free (newdog->name);
		free(newdog);
		return (NULL);
	}
	else
	{
		strcpy(newdog->name,name);
		free(newdog->name);
		free(newdog);
	}
	if (newdog->owner == NULL)
	{
		free(newdog->owner);
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	else
	{
		strcpy(newdog->owner,owner);
		free(newdog->owner);
		free(newdog->name);
		free(newdog);
	}
	newdog->age = age;
	free(newdog);
	return (newdog);
}
