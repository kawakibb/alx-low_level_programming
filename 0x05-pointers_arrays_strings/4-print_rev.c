#include "main.h"

/**
 * print_rev - change the value of a pointer
 * @s: char pointer
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int x = 0;


	while (s[x])
		x++;

	while (x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
