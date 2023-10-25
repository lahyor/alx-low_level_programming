#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint list
 * @head: head of the linked list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *camp;

	if (head)
	{
		while (*head)
		{
			camp = (*head);
			*head = (*head)->next;
			free(camp);
		}
	}
	else
	{
		return;
	}
	free(*head);
	head = 0;
}
