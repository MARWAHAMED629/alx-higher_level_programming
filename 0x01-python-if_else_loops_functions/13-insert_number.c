#include "lists.h"
#include <stdlib.h>

/**
 * insert_node - Insert a number into a sorted list.
 * @head: the adresses of the head pointer
 * @number: it is a number to insert.
 * Return: If the funcs fails - NULL.
 *         Otherwise - the inserted node.
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;

	if (node == NULL || node->n >= number)
	{
		new->next = node;
		*head = new;
		return (new);
	}

	while (node && node->next && node->next->n < number)
		node = node->next;

	new->next = node->next;
	node->next = new;

	return (new);
}
