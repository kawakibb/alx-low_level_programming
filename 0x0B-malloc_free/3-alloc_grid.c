#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - make grid using loop
 * @width: width input
 * @height: input nembre
 * Return: pointer to the nbr two
 */
int **alloc_grid(int width, int height)
{
	int **nembre;
	int S, D;

		if (width <= 0 || height <= 0)
		return (NULL);
	nembre = malloc(sizeof(int *) * height);
	if (nembre == NULL)
		return (NULL);
	for (S = 0; height > S; S++)
	{
		nembre[S] = malloc(sizeof(int) * width);
		if (nembre[S] == NULL)
		{
			for (; 0 <= S; S--)
				free(nembre[S]);
			free(nembre);
			return (NULL);
		}
	}
	for (S = 0; height > S; S++)
	{
		for (D = 0; width > D; D++)
			nembre[S][D] = 0;
	}
	return (nembre);
}
