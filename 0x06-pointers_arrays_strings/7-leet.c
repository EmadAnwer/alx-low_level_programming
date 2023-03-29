/*
 * 0x06. C - More pointers, arrays and strings
 * task 7
 */
#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @src: string refrance
 * Return: *src encodd string into 1337.
 */
char *leet(char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		if ((src[i] == 'a') || (src[i] == 'A'))
		{
			src[i] = '4';
		}
		else if ((src[i] == 'e') || (src[i] == 'E'))
		{
			src[i] = '3';
		}
		else if ((src[i] == 'o') || (src[i] == 'O'))
		{
			src[i] = '0';
		}
		else if ((src[i] == 't') || (src[i] == 'T'))
		{
			src[i] = '7';
		}
		else if ((src[i] == 'l') || (src[i] == 'L'))
		{
			src[i] = '1';
		}
		i++;
	}
	return (src);
}
