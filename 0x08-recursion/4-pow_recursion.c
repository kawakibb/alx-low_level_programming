
#include "main.h"

/**
 * _pow_recursion - return x raised to the power of y
 * @x: nbr duplicated
 * @y: power of a nbr
 *
 * Return: final result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
