#include "main.h"

/**
 * more_numbers - print more numbers
 */

void more_numbers(void)
{
	int i, j;

	for (i = 1; i < 11; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			_putchar (j % 10 + '0');
		}
		else
		{
			_putchar (j)
		}
		_putchar('\n');
	}
}
