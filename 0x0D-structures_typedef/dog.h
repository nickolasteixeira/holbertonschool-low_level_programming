#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - description of a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * struct dog_t - typedef struct
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner's name
 */
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* _DOG_H_ */


