#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - nvo node the began  linked list
 * @head: dbl pte list_t list
 * @str: nvo string in the node
 *
 * Return: the nvo element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *nvo;
unsigned int len = 0;

while (str[len])
len++;

nvo = malloc(sizeof(list_t));
if (!nvo)
return (NULL);

nvo->str = strdup(str);
nvo->len = len;
nvo->next = (*head);
(*head) = nvo;

return (*head);
}
