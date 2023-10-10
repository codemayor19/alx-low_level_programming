#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog info
 * @name: 1st member
 * @age: 2nd member
 * @owner: 3rd member
 *
 * Description: dog infomrmation
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
