#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes a char
 * @c:printed string
 * Return: 1 success
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
