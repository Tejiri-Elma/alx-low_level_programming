#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a list
 * @head: head of a linked list
 * Return: sum of all the data (n) or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int i = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
