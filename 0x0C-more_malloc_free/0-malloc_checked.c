#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates alloc
 * @b: number allvocat
 *
 * Return: a pointermemory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
