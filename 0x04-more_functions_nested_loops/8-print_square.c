#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @s: size of the square
 */
void print_square(int s)
{
	if (s <= 0)
	{
		_putchar('\n');
	} else
	{
		int a, b;

		for (a = 0; a < s; a++)
		{
			for (b = 0; b < s; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

