#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a node to the head
 * @head: the node to add to
 * @str: the string to take the length and add to node
 *
 * Return: new dereference head which points to
 * the new structure created
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i;
	list_t *new;

	new = NULL;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (new);

	i = 0;
	while (str[i] != '\0')
		++i;

	new->len = i;
	new->str = strdup(str);
	new->next = *head;

	*head = new;

	return (*head);

}
