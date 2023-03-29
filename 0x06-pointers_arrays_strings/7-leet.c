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
	char alphabets[] = {'4', 'b', 'c', 'd', '3', 'f', 'g', 'h', 'i',
	 'j', 'k', '1', 'm', 'n', '0', 'p', 'q', 'r',
	  's', '7', 'u', 'v', 'w', 'x', 'y', 'z'};

	i = 0;
	while (src[i] != '\0')
	{
		while (((src[i] >= 'a') && (src[i] <= 'z'))
		|| ((src[i] >= 'A') && (src[i] <= 'Z')))
		{
			if ((src[i] >= 'a') && (src[i] <= 'z'))
			{
				src[i] = alphabets[src[i] - 97];
			}
			else
			{
				src[i] = alphabets[src[i] - 65];
			}
			break;
		}
		i++;
	}
	return (src);
}
