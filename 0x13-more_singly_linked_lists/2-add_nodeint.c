/*
 * 0x13. C - More singly linked lists
 * task 2
 * my solution allocate a new listint_t then duplicate the string
 * at the end change the head reference to the last created node "listint_t l"
 */
#include "lists.h"
/**
 * add_nodeint - creat a new node at the beginning of a listint_t list.
 * @head: pointer to a head pointer
 * @n: number
 * Return: list size
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *l;

	l = malloc(sizeof(listint_t));
	if (l == NULL)
		return (NULL);
	l->n = n;
	l->next = (*head);
	*head = l;
	return (l);
}
