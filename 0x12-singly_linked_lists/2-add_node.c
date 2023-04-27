/*
 * 0x12. C - Singly linked lists
 * task 2
 * my solution allocate a new list_t then duplicate the string
 * at the end change the head reference to the last created node "list_t l"
 */
#include "lists.h"
/**
 * add_node - creat a new node at the beginning of a list_t list.
 * @head: pointer to a head pointer
 * @str: string reference
 * Return: list size
 */
list_t *add_node(list_t **head, const char *str)
{
	char *s_cpy;
	list_t *l;

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
	l->next = (*head);
	*head = l;
	return (l);
}
