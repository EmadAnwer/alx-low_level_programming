/*
 * 0x12. C - Singly linked lists
 * task 3
 */
#include "lists.h"
/**
 * add_node_end - creat a new node at the end of a list_t list.
 * @head: pointer to a head pointer
 * @str: string reference
 * Return: list size
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *s_cpy;
	list_t *l, *t;

	l = malloc(sizeof(list_t));
	if (l == NULL)
		return (NULL);
	if (str)
	{
		s_cpy = strdup(str);
		if (s_cpy == NULL)
		{
			free(l);
			return (NULL);
		}
		l->str = s_cpy;
		l->len = strlen(s_cpy);
	}
	else
	{
		l->str = NULL;
		l->len = 0;
	}
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
