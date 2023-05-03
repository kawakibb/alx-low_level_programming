#include "main.h"

/**
 * char *_strcpy - a function that copies the strings
 * @dest: copy char to dest
 * @src: copy char from src
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int x = -1;

	do {
		x++;
		dest[x] = src[x];
	} while (src[x] != '\0');

	return (dest);
}
