/*
 * 0x08. C - Recursion
 * task 8 adv "not finished yet"
 */
/**
 * wildcmp - compares two strings and returns 1
 * @s1: string refrance
 * @s2: string refrance
 * Return: 1 palindrome or 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	if ((*s1 == '\0') || (*s2 == '\0'))
		return (1);
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		if (*s1 != ' ')
			return (wildcmp(s1 + 1, s2));
		else
			return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
