#include "main.h"
/**
 * _strchr - write the value
 * @s: char input pointer
 * @c: char input pointer
 * Return: Always give the value 0
 */
char *_strchr(char *s, char c)
{
	int y = 0;

	for (; s[y] >= '\0'; y++)
	{
		if (s[y] == c)
			return (&s[y]);
	}
	return (0);
}
