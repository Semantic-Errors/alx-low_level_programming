#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 *
 * @h: pointer to the head of list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int nodes_count = 0;

	for (; h != NULL; h = h->next, nodes_count++)
		printf("%d\n", h->n);

	return (nodes_count);
}
