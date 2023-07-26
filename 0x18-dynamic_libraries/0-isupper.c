#include "main.h"

/**
 * _isupper -  letter is upper
 * @c: The value of the letter
 * Return: 1 if upper or 0 if not
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
	return (1);
}
return (0);
}
