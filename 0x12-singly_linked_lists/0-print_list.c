/*
 * 0x12. C - Singly linked lists
 * task 0
 * my solution depends on looping and change h "head" reference with the next h
 * and check if it equals null so it is the end
 */
#include "lists.h"
/**
 * print_list - print list of strings
 * @h: refrance of list_t "linked list of strings"
 * Return: list size
 */
size_t print_list(const list_t *h)
{
	int size;

	size = 0;
	if (h == NULL)
		return (0);

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		size++;
	}
	return (size);
}
