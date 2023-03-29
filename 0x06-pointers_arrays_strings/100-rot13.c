/*
 * 0x06. C - More pointers, arrays and strings
 * task 8
 */
#include "main.h"
/**
 * rot13 - encodes a string into  rot13.
 * @src: string refrance
 * Return: *src encodd string into  rot13.
 */
char *rot13(char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		while (((src[i] >= 'a') && (src[i] <= 'z'))
		|| ((src[i] >= 'A') && (src[i] <= 'Z')))
		{
			if (((src[i] >= 'a') && (src[i] <= 'm'))
			|| ((src[i] >= 'A') && (src[i] <= 'M')))
			{
				src[i] = src[i] + 13;
				break;
			}
			src[i] = src[i] - 13;
			break;
		}
		i++;
	}
	return (src);
}
