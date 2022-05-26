#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h: head of a singly linked lists
 * Return: returns the number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
