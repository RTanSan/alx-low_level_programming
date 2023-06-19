#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog -  creates a new dog.(type)
 * @name: float(name of dog)
 * @age: float(dog age)
 * @owner: dog owner
 *
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = 0;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return(NULL);
	}


	new_dog -> name = name;
	new_dog -> age = age;
	new_dog -> owner = owner;

	return (new_dog);
}
