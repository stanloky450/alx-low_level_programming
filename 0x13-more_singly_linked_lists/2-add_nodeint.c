#include "lists.h"

/**
 * add_nodeint - This adds a new node at the very beginning of a linked list
 * @head: Serves as pointer to the first node list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
