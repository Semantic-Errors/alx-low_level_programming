#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list
 *
 * @head: the head of list
 * @n: the value of the node to be added to the beginning
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current_node = (*head);
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	while (current_node != NULL && current_node->next != NULL)
		current_node = current_node->next;

	if (current_node == NULL)
		*head = new_node;
	else
		current_node->next = new_node;

	return (new_node);
}
