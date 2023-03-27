/*
 * 0x05. C - Pointers, arrays and strings
 * task 9
 * Purpose : copies the string pointed
 */
#include "main.h"
/**
 * _strcpy - copies the string pointed
 * @dest: char pointer
 * @src: char pointer
 * Return: char pinter
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
