#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - write all the elemnts of dlistint_t list
 * @h: pointe in start of the linked_list
 *
 * Return: nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t a;

	for (a = 0; h != NULL; a++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (a);
}
