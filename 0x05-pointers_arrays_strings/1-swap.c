#include "main.h"

/**
 * swap_int - change the value of a pointer
 * @a: int pointer
 * @b: int pointer
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
