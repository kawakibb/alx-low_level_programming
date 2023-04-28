
#include "main.h"

/**
 * print_number - prints an integer
 * @b: integer to be printed
 */
void print_number(int b)
{
	unsigned int a;

	if (b < 0)
	{
		a = -b;
		_putchar('-');
	} else
	{
		a = b;
	}

	if (a / 10)
	{
		print_number(a / 10);
	}

	_putchar((a % 10) + '0');
}
