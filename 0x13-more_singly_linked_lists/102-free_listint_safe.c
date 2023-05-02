/*
 * 0x13. C - More singly linked lists
 * task Adv 3
 */
#include "lists.h"
/**
 * find_listint_loop_helpr - finds a loop
 *
 * @head: pinter
 *
 * Return: printer
 */
listint_t *find_listint_loop_helpr(listint_t *head)
{
	listint_t *p, *e;

	if (head == NULL)
	{
		return (NULL);
	}
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
 * free_listint_safe - frees a listint list
 *
 * @h: head of list
 *
 * Return: number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *n, *loop;
	size_t len;
	int l = 1;

	if (h == NULL || *h == NULL)
		return (0);

	loop = find_listint_loop_helpr(*h);
	for (len = 0; (*h != loop || l) && *h != NULL; *h = n)
	{
		len++;
		n = (*h)->next;
		if (*h == loop && l)
		{
			if (loop == loop->next)
			{
				free(*h);
				break;
			}
			len++;
			n = n->next;
			free((*h)->next);
			l = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (len);
}
