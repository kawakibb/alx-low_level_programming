#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int i, x;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (x = 0; x < 10; x++)
		{
			if (n[i] == s1[x])
			{
				n[i] = s2[x];
			}
		}
	}
	return (n);
}
