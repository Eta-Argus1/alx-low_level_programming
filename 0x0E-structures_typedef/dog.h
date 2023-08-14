#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog's info
 * @name: First member
 * @age: second member
 * @owner: Third member
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int stringlength(char *s);
char *stringcpy(char *s1, char *s2);

#endif
