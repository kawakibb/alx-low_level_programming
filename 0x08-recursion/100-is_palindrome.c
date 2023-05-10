#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks palindrome string
 * @s: string rev
 *
 * Return: 1 sucess, 0 fail
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - calcul length of a string
 * @s: input string for lengh calcul
 *
 * Return: input char length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks if the char is polandrom
 * @s: char to check
 * @i: numbr of iteration
 * @len: length input char
 *
 * Return: 1 (succes), 0 (faile)
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
