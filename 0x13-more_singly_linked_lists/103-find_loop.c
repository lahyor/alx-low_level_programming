#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 * Return: address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *love = head;
	listint_t *hate = head;

	if (!head)
		return (NULL);

	while (love && hate && hate->next)
	{
		hate = hate->next->next;
		love = love->next;
		if (hate == love)
		{
			love = head;
			while (love != hate)
			{
				love = love->next;
				hate = hate->next;
			}
			return (hate);
		}
	}

	return (NULL);
}
