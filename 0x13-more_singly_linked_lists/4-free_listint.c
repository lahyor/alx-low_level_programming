#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t lists
 * @head: head of the linked lists
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *camp;

	while (head)
	{
		camp = head;
		head = head->next;
		free(camp);
	}

	free(head);
}
