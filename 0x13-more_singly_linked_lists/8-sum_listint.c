#include "lists.h"
/**
 * sum_listin - returns the sum of all the data (n) of a list
 * @head: head of a linked list
 * Return: sum of all the data (n) or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int i;

	if (head == NULL)
		return (0);
	for (i = 0; head != NULL; i++)
	{
		i = i + (head->n);
		head = head->next;
	}
	return (i);
}
