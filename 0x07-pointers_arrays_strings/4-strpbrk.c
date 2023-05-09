#include "main.h"
/**
 * _strpbrk - Two  pointers as input
 * @s: input of the fonction
 * @accept: char second input
 * Return: give the value 0 if Success
 */
char *_strpbrk(char *s, char *accept)
{
		int nbr;

		while (*s)
		{
			for (nbr = 0; accept[nbr]; nbr++)
			{
			if (*s == accept[nbr])
			return (s);
			}
		s++;
		}

	return ('\0');
}
