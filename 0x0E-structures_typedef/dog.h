#ifndef DOG_H
#define DOG_H
/**
 * struct dog - defines dog with name owner age
 * @name: name of dog
 * @age: age of dogh
 * @owner: owne of the dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

