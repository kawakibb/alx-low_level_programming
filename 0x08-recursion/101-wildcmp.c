#include "main.h"

/**
 * wildcmp - Compare two input strings
 * @A: pointer first char
 * @B: pointer second char
 * Return: 0
 */
int wildcmp(char *A, char *B)
{
	if (*A == '\0')
	{
	if (*B != '\0' && *B == '*')
	{
	return (wildcmp(A, B + 1));
	}
	return (*B == '\0');
	}
	if (*B == '*')
	{
	return (wildcmp(A + 1, B) || wildcmp(A, B + 1));
	}
	else if (*A == *B)
	{
	return (wildcmp(A + 1, B + 1));
	}
		return (0);
}
