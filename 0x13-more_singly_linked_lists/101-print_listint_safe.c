/*
 * 0x13. C - More singly linked lists
 * task Adv 2
 */
#include "lists.h"
/**
 * find_listint_helper - finds a loop
 *
 * @head: printer
 *
 * Return: printer
 */
listint_t *find_listint_helper(listint_t *head)
{
	listint_t *p, *e;

	if (head == NULL)
		return (NULL);

	for (e = head->next; e != NULL; e = e->next)
	{
		if (e == e->next)
			return (e);
		for (p = head; p != e; p = p->next)
			if (p == e->next)
				return (e->next);
	}
	return (NULL);
}

/**
 * print_listint_safe - prints a linked list, even if it
 * has a loop
 *
 * @head: printer
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;
	int i;
	listint_t *loop;

	loop = find_listint_helper((listint_t *) head);
	for (len = 0, i = 1; (head != loop || i) && head != NULL; len++)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		if (head == loop)
		{
			i = 0;
		}
		head = head->next;
	}
	if (loop != NULL)
	{
		printf("-> [%p] %d\n", (void *) head, head->n);
	}
	return (len);
}
