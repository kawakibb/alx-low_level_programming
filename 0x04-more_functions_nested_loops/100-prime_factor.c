#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int nb;
	long int MAX;
	long int a;

	nb = 612852475143;
	MAX = -1;

	while (nb % 2 == 0)
	{
		MAX = 2;
		nb /= 2;
	}

	for (a = 3; a <= sqrt(n); a = a + 2)
	{
		while (nb % a == 0)
		{
			MAX = a;
			nb = nb / i;
		}
	}

	if (nb > 2)
		MAX = nb;

	printf("%ld\n", MAX);

	return (0);
}

