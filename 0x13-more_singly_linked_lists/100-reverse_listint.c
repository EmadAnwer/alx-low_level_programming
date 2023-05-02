/*
 * 0x13. C - More singly linked lists
 * task Adv 1
 */
#include "lists.h"

/**
 * reverse_helper - reverses a listint list recursively
 *
 * @f: node to reverse
 * @s: node after node to reverse
 *
 * Return: void
 */
listint_t *reverse_helper(listint_t *f, listint_t *s)
{
	listint_t *ptr, *prev;

	prev = NULL;
	ptr = f;
	while (ptr->next != s)
	{
		prev = ptr;
		ptr = ptr->next;
	}

	if (prev != NULL)
		prev->next = f;
	s = f->next;
	f->next = ptr->next;
	if (f != ptr && s != f)
		s = reverse_helper(s, f);
	ptr->next = s;
	return (ptr);
}
/**
 * reverse_listint - deletes node at index index of linked list.
 * @head: pointer to a head pointer
 * Return: the head node’s data (n) or 0
 */

listint_t *reverse_listint(listint_t **head)
{

	if (head == NULL || *head == NULL)
		return (NULL);

	*head = reverse_helper(*head, NULL);
	return (*head);

}
