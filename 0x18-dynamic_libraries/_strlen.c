#include "main.h"
/**
 *_strlen - returns the length of s
 * @s: string to calcul the length
 *Return: lenght;
 */

int _strlen(char *s)
{
int cnt, a;
a = 0;
for (cnt = 0; s[cnt] != '\0'; cnt++)
a++;

return (a);
}
