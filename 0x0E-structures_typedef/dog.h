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
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* ALX_0X0E_STRUCTURES_TYPEDEF_DOG_H_ */
