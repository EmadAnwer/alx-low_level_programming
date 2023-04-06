/*
 * 0x08. C - Recursion
 * task 7 adv
 */
#include <string.h>
/**
 * is_pal - palindrome checker
 * @s: sting
 * @slen: int string len
 * @i: iteration
 * Return: 1 palindrome or 0 if not
 */
int is_pal(char *s, int slen, int i)
{

	if ((slen == 1))
		return (1);

	if (s[0] != s[slen - 1 - i])
		return (0);

	return (is_pal(s + 1, slen - 1, i + 1));
}

/**
 * is_palindrome - palindrome checker
 * @s: string
 * Return: 1 palindrome or 0 if not
 */
int is_palindrome(char *s)
{
	int slen;

	slen = strlen(s);
	return (is_pal(s, slen, 0));
}
