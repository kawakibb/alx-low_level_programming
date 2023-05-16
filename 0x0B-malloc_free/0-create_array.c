#include "main.h"
#include <stdlib.h>

/**
 * create_array - put an  array of size char c
 * @c: char as input
 * @size: insigned intiger input
 * Description: put an  array of size character c
 * Return: array pointer
 *
 */

char *create_array(unsigned int size, char c)
{
	char *nombre;
	unsigned int i;

	nombre = malloc(sizeof(char) * size);
	if (size == 0 || nombre == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		nombre[i] = c;
	return (nombre);
}
