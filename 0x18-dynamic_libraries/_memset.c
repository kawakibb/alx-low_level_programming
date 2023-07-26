#include "main.h"
/**
*_memset - The _memset() function fills first
* bytes of the memory area
*@s: target
*@b: cst byte
*@n: nbr byte
*Return: value of target
*/

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
