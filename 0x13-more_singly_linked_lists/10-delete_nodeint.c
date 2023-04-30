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
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *next, *tofree;

	next = *head;
	if (head == NULL || *head == NULL)
		return(-1);
	
	if (index == 0)
	{
		tofree = *head;

		if(tofree->next)
			*head = tofree->next;
		else 
			*head = NULL; 
		free(tofree);
		return (1);
	}
	while (--index)
	{
		next = next->next;
		if (next == NULL)
			return (-1);
	}
	tofree = next->next;
	next->next = next->next->next;
	free(tofree);
	return (1);
}
