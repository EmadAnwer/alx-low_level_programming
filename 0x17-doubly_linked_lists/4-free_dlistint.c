/*
 * 0x17. C - Doubly linked lists
 * task 4
 */
#include "lists.h"
/**
 * free_dlistint - free all the elements of a dlistint_t list.
 * @head: pointer to dlistint_t
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	current = head;
	while (head)
	{
		current = head;
		head = head->next;
		if (current)
			free(current);
	}
}
