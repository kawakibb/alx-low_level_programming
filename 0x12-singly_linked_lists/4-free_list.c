#include <stdlib.h>
#include "lists.h"

/**
 * free_list - fre a linke list.
 * @head: list_t to freed.
 */
void free_list(list_t *head)
{
	list_t *tinp;

	while (head)
	{
	tinp = head->next;
	free(head->str);
	free(head);
	head = tinp;
	}
}

