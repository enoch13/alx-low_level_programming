#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * add_node_end - add a new node at the end of `list_t` list
 * @head: double pointer to head
 * @str: string to duplicate into new node
 * Return: Address of the new element or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	list_t *new;
	int c;

	current = *head;
	while (current && current->next != NULL)
		current = current->next;

	for (c = 0; dup_str[c] != '\0'; c++)
		;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = c;
	new->next = NULL;

	if (current)
		current->next = new;
	else
		*head = new;
	return (new);
}
