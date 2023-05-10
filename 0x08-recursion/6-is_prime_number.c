#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number -look for a prime number
 * @n: number of iteration
 *
 * Return: 1  prime number, 0 not prime nbr
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates the number if it's prime recursively
 * @n: nbr of evaluation
 * @i: iteration nubre
 *
 * Return: 1 success, 0 fail
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}

