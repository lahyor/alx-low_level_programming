#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - The attributes of a dog
 * @name: the dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 * Description: The attributes of a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for the dog structures
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif