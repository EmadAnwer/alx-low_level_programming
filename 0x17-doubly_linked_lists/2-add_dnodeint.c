/*
 * 0x17. C - Doubly linked lists
 * task 2
 */
#include "lists.h"
/**
 * add_dnodeint - add new node at the beginning of a dlistint_t list.
 * @head: pointer to head pointer
 * @n: integer value
 * Return: node address or null in fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	/*add new node in the beginning of the list*/
	if (*head)
	{
		(*head)->prev = new_node;
		new_node->next = *head;
	}
	*head = new_node;

	return (new_node);
}
