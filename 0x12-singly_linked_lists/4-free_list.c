#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list that's linked
 * @head: Pointer to the node of linked list
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *menu;

	while (head)
	{
		menu = head;
		head = head->next;
		free(menu->str);
		free(menu);
	}

	free(head);
}
