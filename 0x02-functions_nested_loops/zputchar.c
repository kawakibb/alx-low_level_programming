#include "main.h"

/**
 * _putchar - print word -putchar
 *@c: Caracter that wil be printed
 * Return: on success 1.
 *        on  error, -1 is returned.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
