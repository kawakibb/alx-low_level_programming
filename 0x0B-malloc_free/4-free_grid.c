#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees two D  array
 * @grid:second grid
 * @height: dimension of grid hight
 * Description: memory location
 * Return: o
 *
 */

void free_grid(int **grid, int height)
{
	int A;

	for (A = 0; height > A; A++)
	{
		free(grid[A]);
	}
	free(grid);
}
