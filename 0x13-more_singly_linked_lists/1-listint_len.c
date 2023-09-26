#include "lists.h"

/**
 * listint_len - return  number of elements in a linked lists
 * @h: list of the listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num1 = 0;

	while (h)
	{
		num1++;
		h = h->next;
	}

	return (num1);
}
