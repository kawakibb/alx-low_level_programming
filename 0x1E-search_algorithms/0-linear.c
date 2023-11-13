#include "search_algos.h"

/**
 * linear_search - look for a value in an array of
 * integers Linear search algorithm
 *
 * @array: array input
 * @size: array size
 * @value: value to look for
 * Return: Always exit succes
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
