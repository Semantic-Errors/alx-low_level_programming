#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 *
 * @head: the head of list
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	free_listint(head->next);
	free(head);
}
