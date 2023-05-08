#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: the function input
 * @size: the function input
 * Return: give the vqlue 0 (if the code is Success)
 */
void print_diagsums(int *a, int size)
{
	int x, y, val;

	x = 0;
	y = 0;

	for (val = 0; val < size; val++)
	{
		x = x + a[val * size + val];
	}

	for (val = size - 1; val >= 0; val--)
	{
		y += a[val * size + (size - val - 1)];
	}

	printf("%d, %d\n", x, y);
}
