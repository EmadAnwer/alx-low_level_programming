/*
 * 0x13. C - More singly linked lists
 * task 9
 */
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index index of linked list.
 * @head: pointer to a head pointer
 * @index: index
 * Return: the head node’s data (n) or 0
 */

listint_t *reverse_listint(listint_t **head)
{

	listint_t *temp2, *temp;
	
	
	while ((*head)->next)
	{ 
		temp = (*head)->next;
		temp2 = temp->next;
		(*head)->next = temp2;
		temp->next = (*head);
		temp2 =	temp;
		*head = temp;
	}
	(*head)->next = NULL;
	return(temp2);

}
