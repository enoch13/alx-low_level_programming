#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to return
 * Return: the length of the string
 */
int _strlen(const char *s)
{
	int x;

	while (x = 0, s[x] != '\0')
		x++;

	return (x);
}

/**
 * add_node - adds a new node at the beginning of list_t list
 * @head: address of node
 * @str: string to add
 * Return: address of new element, NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int size = _strlen(str);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = size;
	new->next = *head;
	*head = new;
	return (new);
}
