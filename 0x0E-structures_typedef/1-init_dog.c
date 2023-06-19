#include <stdio.h>
#include "dog.h"
#include "main.h"

/**
 * init_dog -  initialize a variable of type struct dog
 * @d:  pointer of struct
 * @name: pointer(dog name)
 * @age: float (dog age)
 * @owner: char(dog owner)
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	while (d == NULL)
	{
		return;
	}

	d-> name = name;
	d -> age = age;
	d -> owner = owner;
}
