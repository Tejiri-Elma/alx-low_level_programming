#include "lists.h"
#include <string.h>
/**
 * add_node - function that adds a new node at the beginning of a list
 * @head: the beginning of a linked list
 * @str: string
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len;
	list_t *new;

	for (len = 0; str[len] != '\0'; len++)
		continue;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
