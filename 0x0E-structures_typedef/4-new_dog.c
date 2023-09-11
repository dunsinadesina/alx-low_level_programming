#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - function
 * @name: argument
 * @age: argument
 * @owner: argument
 * Return: newdog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int namelength, ownerlength, i;
	dog_t *newdog;

	newdog = (dog_t *)malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	while (name[namelength] != '\0')
		namelength++;
	while (owner[ownerlength] != '\0')
		ownerlength++;
	newdog->name = (char *)malloc(namelength + 1);
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	for (i = 0; i <= namelength; i++)
	{
		newdog->name[i] = name[i];
	}
	newdog->age = age;
	newdog->owner = (char *)malloc(ownerlength + 1);
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	for (i = 0; i <= ownerlength; i++)
	{
		newdog->owner[i] = owner[i];
	}
	return (newdog);
}
