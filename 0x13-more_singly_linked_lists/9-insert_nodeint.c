/*
 * 0x13. C - More singly linked lists
 * task 9
 */
#include "lists.h"
/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: pointer to a head pointer
 * @idx: index
 * @n: number
 * Return: the head node’s data (n) or 0
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *next, *new;

	next = *head;
	if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = NULL;
		if (head == NULL)
		{
			*head = new;
			return (*head);
		}
		else
		{
			new->next = *head;
			*head = new;
			return (*head);
		}
	}
	while (--idx)
	{
		next = next->next;
		if (next == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = next->next;
	next->next = new;

	return (new);
}
