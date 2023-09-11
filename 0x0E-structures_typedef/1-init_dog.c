#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - function
 * @d: argument
 * @name: argument
 * @age: argument
 * @owner: argument
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		int namelength, ownerlength, i;

		namelength = 0;
		while (name[namelength] != '\0')
		{
			namelength++;
		}
		d->name = (char *)malloc(namelength + 1);

		ownerlength = 0;
		while (owner[ownerlength] != '\0')
		{
			ownerlength++;
		}
		d->owner = (char *)malloc(ownerlength + 1);
		if (d->name == NULL || d->owner == NULL)
		{
			printf("Error\n");
			exit(1);
		}
		for (i = 0; i <= namelength; i++)
		{
			d->name[i] = name[i];
		}
		d->age = age;
		for (i = 0; i <= ownerlength; i++)
		{
			d->owner[i] = owner[i];
		}
	}
	else
	{
		printf("Error\n");
		exit(1);
	}
}
