/*
 * 0x13. C - More singly linked lists
 * task 9
 */
#include "lists.h"
/**
 * reverse_listint - deletes node at index index of linked list.
 * @head: pointer to a head pointer
 * Return: the head node’s data (n) or 0
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp2, *temp;

	if (head == NULL || *head == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);
	temp = *head;
	temp2 = temp->next;
	*head = temp2->next;
	temp->next = NULL;
	while ((*head)->next)
	{
		temp2->next = temp;
		temp = temp2;
		temp2 = (*head);
		*head = (*head)->next;
	}
	(*head)->next = temp2;
	temp2->next = temp;
	return (*head);

}
