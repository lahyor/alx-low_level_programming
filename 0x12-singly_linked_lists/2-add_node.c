#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node - Adds a new node at the beginning of a list
  * @head: The original linked list
  * @str: The string to add to the node
  * Return: The address of the new list or NULL if it failed
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t menu;

	if (head != NULL && str != NULL)
	{
		menu = malloc(sizeof(list_t));
		if (menu == NULL)
			return (NULL);

		menu->str = strdup(str);
		menu->len = _strlen(str);
		menu->next = *head;

		*head = menu;

		return (menu);
	}
	return (0);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  * Return: String length
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
