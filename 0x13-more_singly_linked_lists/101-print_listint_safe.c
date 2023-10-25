#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: head of the linked list
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *love = head, *hate = head;
	size_t mend = 0;
	int un_loop = 0;

	while (love && hate && hate->next)
	{
		if (!(hate->next->next))
			break;
		love = love->next;
		hate = hate->next->next;
		if (love == hate)
		{
			love = love->next;
			un_loop = 1;
			break;
		}
	}
	if (!un_loop)
	{
		while (head)
		{
			mend++;
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		return (mend);
	}
	while (head)
	{
		mend++;
		if (head == love)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			printf("-> [%p] %d\n", (void *)head, head->next->n);
			exit(98);
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	return (0);
}
