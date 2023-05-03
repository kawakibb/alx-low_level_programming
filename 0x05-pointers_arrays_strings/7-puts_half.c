#include "main.h"

/**
 * puts_half - change the value of a pointer
 * @a: int pointer
 *
 * Return: Nothing
 */

void puts_half(char *a)
{
	int x;

	for (x = 0; a[x] != '\0'; x++)
		x++;

	for (x /= 2; a[x] != '\0'; x++)
	{
		_putchar(a[x]);
	}
	_putchar('\n');
}
