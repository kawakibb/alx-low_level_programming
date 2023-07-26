#include "main.h"

/**
 * _strlen - return the lent of a character
 * @s: char pointer
 *
 * Return: lent of s
 */

int _strlen(char *s)
{
	int x;

	for (x = 0; *s != '\0'; s++)
		++x;

	return (x);
}
