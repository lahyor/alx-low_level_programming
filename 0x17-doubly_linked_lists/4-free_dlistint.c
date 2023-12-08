#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of the list
 * Return: no return
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *fep;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((fep = head) != NULL)
	{
		head = head->next;
		free(fep);
	}
}
