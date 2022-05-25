#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list
 * @head: beginning of a linked list
 * @str: string
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len;
	list_t *new, *temp = *head;

	for (len = 0; str[len] != '\0'; len++)
		continue;
	new = malloc(sizeof(list_t));

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
	{
		(*head) = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}
