#include "main.h"

/**
 *_strcat - concatenates  the string pointed
 *@dest: String will be appended
 *@src: String concatenated
 *
 * Return: returns pointer
 */

char *_strcat(char *dest, char *src)
{

	int idx = 0, d_len = 0;

	while (dest[idx++])
		d_len++;

	for (idx = 0; src[idx]; idx++)
		dest[d_len++] = src[idx];

	return (dest);
}
