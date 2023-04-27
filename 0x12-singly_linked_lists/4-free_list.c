/*
 * 0x12. C - Singly linked lists
 * task 4
 */
#include "lists.h"
/**
 * free_list - frees a list_t list.
 * @head: pointer to a head pointer
 */
void free_list(list_t *head)
{

	if (head == NULL)
	{
		return;
	}
	free_list(head->next);
	if (head->str)
		free(head->str);
	free(head);
}
