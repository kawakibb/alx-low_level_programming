#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns nber lemets in the linked list
 * @h: pointe list_t of list
 *
 * Return: number in h
*/
size_t list_len(const list_t *h)
{
size_t no = 0;

while (h)
{
	no++;
	h = h->next;
}
return (no);
}
