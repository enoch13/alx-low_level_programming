#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * add_node - adds a new node at the beginning of list_t list
 * @head: address of node
 * @str: string to add
 * Return: address of new element, NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
int x;
for (x = 0; dup_str[x] != '\0'; x++);
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
new->len = x;
new->next = *head;
*head = new;
return (*head);
}
