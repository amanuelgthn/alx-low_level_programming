#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog-takes name age and owner of the dog
 * @name:name of the dog
 * @age:age of the dog
 * @owner:owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* _DOG_H_ */

