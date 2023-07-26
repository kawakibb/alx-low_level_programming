#include "main.h"
/**
 * _strstr - two pointer as input
 * @haystack: first pointer input
 * @needle: second pointer input
 * Return: give 0 Success
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *ptr1 = haystack;
		char *ptr2 = needle;

		while (*ptr1 == *ptr2 && *ptr2 != '\0')
		{
			ptr1++;
			ptr2++;
		}

		if (*ptr2 == '\0')
			return (haystack);
	}

	return (0);
}
