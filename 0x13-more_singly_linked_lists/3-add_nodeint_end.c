/*
 * 0x13. C - More singly linked lists
 * task 3
 */
#include "lists.h"
/**
 * add_nodeint_end - creat a new node at the end of a listint_t list.
 * @head: pointer to a head pointer
 * @n: number
 * Return: list size
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *l, *t;

	l = malloc(sizeof(listint_t));
	if (l == NULL)
		return (NULL);

	l->n = n;
	l->next = NULL;
	t = *head;
	if (*head == NULL)
		*head = l;
	else
	{
		while (t)
		{
			if (t->next == NULL)
			{
				t->next = l;
				break;
			}
			else
				t = t->next;
		}
	}
	return (l);
}
