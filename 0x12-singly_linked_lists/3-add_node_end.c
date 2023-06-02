#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add a mikto node linked list
 * @head: dbl point to list_t
 * @str: str to put mikto node
 *
 * Return: addres, NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *mikto;
list_t *tinp = *head;
unsigned int len = 0;

while (str[len])
len++;

mikto = malloc(sizeof(list_t));
if (!mikto)
return (NULL);

mikto->str = strdup(str);
mikto->len = len;
mikto->next = NULL;

if (*head == NULL)
{
*head = mikto;
return (mikto);
}

while (tinp->next)
tinp = tinp->next;

tinp->next = mikto;

return (mikto);
}
