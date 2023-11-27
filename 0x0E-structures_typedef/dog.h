#ifndef ALX_0X0E_STRUCTURES_TYPEDEF_DOG_H_
#define ALX_0X0E_STRUCTURES_TYPEDEF_DOG_H_
#include <stdlib.h>

/**
 * struct dog - stores data about the dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the name of the dog's owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* ALX_0X0E_STRUCTURES_TYPEDEF_DOG_H_ */
