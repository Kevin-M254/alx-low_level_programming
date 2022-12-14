#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_t - type def for struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - description for dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: Structure stores information about a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
