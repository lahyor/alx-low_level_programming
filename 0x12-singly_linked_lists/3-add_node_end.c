#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: original linked list
 * @str: String to add to code
 * Return: address of the new list or NULL
 */

list_t *add_node_end(list_t **head, const char *str);
{
	list_t *node, *menu;

	if (str != NULL)
	{
		node = malloc(sizeof(list_t));
		if (node == NULL)
			return (NULL);

		node->str = strdup(str);
		node->len = _strlen(str);
		node->next = NULL;

		if (*head == NULL)
		{
			*head = node;
			return (*head);
		}
		else
		{
			menu = *head;
			while (menu->next)
				menu = menu->next;

			menu->next = node;
			return (menu);
		}
	}
	return (NULL);
}

/**
 * _strlen - length of the string
 * @s: string to count
 * Return: string length
 */

int _strlen(const char *s)
{
	int i = 0;

	while (*s)
	{
		s++;
		i++;
	}

	return (i);
}
