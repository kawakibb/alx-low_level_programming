#include "main.h"
/**
 * _strspn - two entry pointers
 * @s: first char input of the function
 * @accept: second char input of the fuction
 * Return: give the value 0 if success
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int X = 0;
	int Y;

	while (*s)
	{
		for (Y = 0; accept[Y]; Y++)
		{
			if (*s == accept[Y])
			{
				X++;
				break;
			}
			else if (accept[Y + 1] == '\0')
				return (X);
		}
		s++;
	}
	return (Y);
}
