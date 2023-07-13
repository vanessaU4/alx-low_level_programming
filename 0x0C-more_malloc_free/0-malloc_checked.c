#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocates memory with the use of malloc
 * @b: size to be alocated
 * Return: pointer to an allocated memory or exit with 98
 **/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
