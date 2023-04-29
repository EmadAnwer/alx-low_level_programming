/*
 * 0x13. C - More singly linked lists
 * task 6
 */
#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to a head pointer
 * Return: the head node’s data (n) or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *next_head;

	if ((*head)->next)
	{
		next_head = (*head)->next;
		free(*head);
		*head = next_head;
		return ((*head)->n);
	}
	return (0);
}
