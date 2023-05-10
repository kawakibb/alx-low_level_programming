#include "main.h"

/**
 * factorial - factorial of a number n
 * @n: number input
 *
 * Return: factorial a nbr n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
