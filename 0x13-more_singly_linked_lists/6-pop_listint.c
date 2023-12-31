#include "lists.h"

/**
 * pop_listint - delete  head node of the list
 * @head: pointer to the first element in the linked list
 *
 * Return:data inside the elements that was deleted,
 * or return 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num1;

	if (!head || !*head)
		return (0);

	num1 = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num1);
}

