#include "main.h"
/**
 * _strlen_recursion - length of the input char.
 * @s: the input string .
 *
 * Return: string lenth.
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
