/*
 * 0x13. C - More singly linked lists
 * task 9
 */
#include "lists.h"
/**
 * insert_nodeint_at_index - deletes the head node of a listint_t linked list
 * @head: pointer to a head pointer
 * @idx: index
 * @n: number
 * Return: the head node’s data (n) or 0
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *next, *new;

	if (*head == NULL || head == NULL)
		return (NULL);
	if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = (*head)->next;
		(*head) = new;
		return (new);
	}
	next = *head;
	while (idx != 1)
	{
		next = next->next;
		if ((next == NULL) && (idx != 1))
			return (NULL);
		idx--;
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = next->next;
	next->next = new;

	return (new);
}
