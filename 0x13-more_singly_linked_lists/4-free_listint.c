#include "lists.h"
/**
 * free_listint - frees a list
 * @head: head of a singly linked list
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
