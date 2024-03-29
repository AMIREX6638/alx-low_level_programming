#include "lists.h"

/**
 * sum_listint - Calculates the sum of all
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If the list is empty - 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
