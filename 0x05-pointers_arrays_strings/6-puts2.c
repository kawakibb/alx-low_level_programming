#include "main.h"

/**
 * puts2 - change the value of a pointer
 * @str: int pointer
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; ++c)
	{
		if (c % 2 == 0)
			_putchar(str[c]);
	}
	_putchar ('\n');
}
