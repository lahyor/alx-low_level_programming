#include <stdlib.h>
#include "dog.h"

int _strlen(char *p);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - creates a new dog
 * @name: Name of the new dog
 * @age: Age of the new dog
 * @owner: Owner of the new dog
 * Return: void
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *min_dog;
	int name_1 = 0, own_1 = 0;

	if (name != NULL && owner != NULL)
	{
		name_1 = _strlen(name) + 1;
		own_1 = _strlen(owner) + 1;
		min_dog = malloc(sizeof(dog_t));

		if (min_dog == NULL)
			return (NULL);

		min_dog->name = malloc(sizeof(char) * name_1);

		if (min_dog->name == NULL)
		{
			free(min_dog);
			return (NULL);
		}

		min_dog->owner = malloc(sizeof(char) * own_1);

		if (min_dog->owner == NULL)
		{
			free(min_dog->name);
			free(min_dog);
			return (NULL);
		}

		min_dog->name = _strcpy(min_dog->name, name);
		min_dog->owner = _strcpy(min_dog->owner, owner);
		min_dog->age = age;
	}
	return (min_dog);
}

/**
 * _strlen - length of the string
 * @p: String to be checked
 * Return: String length
 */

int _strlen(char *p)
{
	int i = 0;

	for (; *p != '\0'; p++)
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy - copy a string
 * @dest: Destination value
 * @src: Source value
 * Return: the pointer to the destination value
 */

char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[c] = src[c];
	}

	dest[c++] = '\0';

	return (dest);
}
