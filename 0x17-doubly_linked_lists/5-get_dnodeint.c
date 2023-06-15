/*
 * 0x17. C - Doubly linked lists
 * task 5
 */
#include "lists.h"
/**
 * get_dnodeint_at_index - Get node at index.
 * @head: pointer to dlistint_t
 * @index: unsigned number
 * Return: returns the nth node of a dlistint_t linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head)
	{
		if (index == 0)
			return (head);
		head = head->next;
		index--;
	}
	return (NULL);
}
