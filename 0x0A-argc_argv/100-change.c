#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the min nbrber of money to
 * make change for  money
 * @argc: nbrber arg
 * @argv: array arg
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int nbr, x, Res;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	nbr = atoi(argv[1]);
	Res = 0;

	if (nbr < 0)
	{
		printf("0\n");
		return (0);
	}

	for (x = 0; x < 5 && nbr >= 0; x++)
	{
		while (nbr >= coins[x])
		{
			Res++;
			nbr -= coins[x];
		}
	}

	printf("%d\n", Res);
	return (0);
}
