#include "lists.h"
/**
 * pop_listint - deletes the head node of a list
 * @head: head of a singly linked list
 * Return: head node’s data (n) or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	free(temp);
	data = temp->n;
	return (data);
}
