#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nap;
	dlistint_t *head;
	unsigned int x;

	nap = NULL;
	if (idx == 0)
		nap = add_dnodeint(h, n);
	else
	{
		head = *h;
		x = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (x == idx)
			{
				if (head->next == NULL)
					nap = add_dnodeint_end(h, n);
				else
				{
					nap = malloc(sizeof(dlistint_t));
					if (nap != NULL)
					{
						nap->n = n;
						nap->next = head->next;
						nap->prev = head;
						head->next->prev = nap;
						head->next = nap;
					}
				}
				break;
			}
			head = head->next;
			x++;
		}
	}

	return (nap);
}
