/*
 * 0x13. C - More singly linked lists
 * task 7
 */
#include "lists.h"
/**
 * get_nodeint_at_index - deletes the head node of a listint_t linked list
 * @head: pointer to a head pointer
 * @index: index
 * Return: the head node’s data (n) or 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);

	while (index)
	{
		head = head->next;
		index--;
		if (head == NULL && index != 0)
			return (NULL);
	}

	return (head);
}
