/*
 * 0x17. C - Doubly linked lists
 * task 7
 */
#include "lists.h"
/**
 * insert_dnodeint_at_index -inserts a new node at a given position.
 * @h: pointer to list pinter
 * @idx: unsigned number
 * @n: number
 * Return: node or Null in error
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	/*ther is no head*/
	if (h == NULL)
		return (NULL);
	/*idx 0 means add new_node as a head*/
	if (idx == 0)
		return (add_dnodeint(h, n));

	/*get the node before idx*/
	current = *h;
	while (current != NULL && idx > 1)
	{
		current = current->next;
		idx--;
	}

	if (current == NULL)
		return (NULL);

	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = add_dnodeint(&(current->next), n);
	if (new_node == NULL)
		return (NULL);

	new_node->prev = current;
	return (new_node);
}
