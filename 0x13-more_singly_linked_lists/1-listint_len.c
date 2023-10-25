#include <stdio.h>
#include "lists.h"

/**
 * listint_len - count elements in a linked lists
 * @h: head of the linked list
 * Return: number of elements in a listint_t list
 */

size_t listint_len(const listint_t *h)
{
	int love = 0;

	if (h != NULL)
	{
		while (h)
		{
			h = h->next;
			love++;
		}
	}
	return (love);
}
