#include "lists.h"
/**
 * free_listint - frees a list
 * @head: head of a singly linked list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		free(head);
	}
}
