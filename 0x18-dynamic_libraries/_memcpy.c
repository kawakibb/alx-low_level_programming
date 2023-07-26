#include "main.h"
/**
*_memcpy - The _memcpy() function copies bytes
*@dest:area where bytes are copied to
*@src: bytes are copied from
*@n:number of bytes
*Return: returns a pointer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
