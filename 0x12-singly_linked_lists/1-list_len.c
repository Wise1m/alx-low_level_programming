#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t node_count = 1;

	/*if head is null return 0 nodes*/
	if (h == NULL)
		return (0);

	/*iterate through the nodes*/
	while (h->next != NULL)
	{
		/*go to the next node*/
		h = h->next;
		/*count node*/
		node_count++;
	}

	return (node_count);
}
