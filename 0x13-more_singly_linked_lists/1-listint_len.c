#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 *
 * @h: pointer to the head of list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	unsigned int nodes_count = 0;

	for (; h != NULL; h = h->next)
		nodes_count++;

	return (nodes_count);
}
