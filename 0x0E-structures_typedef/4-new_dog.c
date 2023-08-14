#include "dog.h"

int stringlength(char *s);
char *stringcpy(char *s1, char *s2);
/**
 * new_dog - function that create a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int l1, l2;

	l1 = stringlength(name);
	l2 = stringlength(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (l1))

	stringcpy(new_dog->name = *name);
	new_dog->age = age;
	stringcpy(new_dog->owner = *owner);


}

/**
 * stringlength - calculate string length
 * @s: the string
 * Return: the string length
 */

int stringlength(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * stringcpy - copies a string from s2 to s1
 * @s1: destination string
 * @s2: source string
 * Return: copied string
 */

char *stringcpy(char *s1, char *s2)
{
	int i, j;

	j = stringlength(s2);

	for (i = 0; i < j; i++)
		s1[i] = s2[i];
	s1[i] = '\0';

	return (s1);
}
