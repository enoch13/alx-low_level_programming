#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a list
 * @head: the beginning of the list
 * @n: the data to add
 * Return: the address of the new element, NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *prev;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	else
	{
		prev = *head;
		while (prev->next)
			prev = prev->next;
		prev->next = new;
	}
	return (new);
}
