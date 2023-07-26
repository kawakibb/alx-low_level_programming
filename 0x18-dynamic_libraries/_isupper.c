#include "main.h"
/**
*_isupper - verifies if  character is uppercase or not
*@c: tested char
*Return: returns 1 or 0 if not
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
}
