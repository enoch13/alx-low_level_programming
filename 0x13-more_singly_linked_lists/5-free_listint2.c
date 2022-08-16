#include "lists.h"

/**
 * free_listint2 - free a listint_t list
 * @head: double pointer to address of head list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
