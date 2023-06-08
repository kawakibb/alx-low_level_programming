#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, nbr = 0;
	unsigned long int maria;

	for (i = 63; i >= 0; i--)
	{
		maria = n >> i;

		if (maria & 1)
		{
			_putchar('1');
			nbr++;
		}
		else if (nbr)
			_putchar('0');
	}
	if (!nbr)
		_putchar('0');
}
