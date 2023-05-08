#include "main.h"
/**
 * print_chessboard - take pointer as input
 * @a: array from 0 to 8
 * Return: return 0 if it succeed
 */
void print_chessboard(char (*a)[8])
{
	int X;
	int Y;

	for (X = 0; X < 8; X++)
	{
		for (Y = 0; Y < 8; Y++)
			_putchar(a[X][Y]);
		_putchar('\n');
	}
}
