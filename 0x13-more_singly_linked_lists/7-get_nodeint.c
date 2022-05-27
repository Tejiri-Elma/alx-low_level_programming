#include "lists.h"
/**
 * get_nodeint_at_index -  returns the nth node of a list
 * @head: head of a linked list
 * @index: index of the node, starting at 0
 * Return: nth node of a linked list or ) if NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (0);
	for (i = 0; head != NULL; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}
	return (head);
}
