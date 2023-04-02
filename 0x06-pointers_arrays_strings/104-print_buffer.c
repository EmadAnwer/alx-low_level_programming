/*
 * 0x06. C - More pointers, arrays and strings
 * task 4
 */
#include "main.h"
#include "stdio.h"
/**
 * print_buffer - reverse array elments
 * @b: size of an array
 * @size: array refrance
 */
void print_buffer(char *b, int size)
{
	int i, z;

	z = 0;
	while (z < size)
	{
		printf("%08x: ", z);
		for (i = 0; i < 10 && i < size; i++)
		{
			if (z + i >= size)
			{
				printf("     ");
				i++;
			}
			else
			{
				printf("%02x", b[z + i]);
				i++;
				printf("%02x ", b[z + i]);
			}
		}
		for (i = 0; i < 10 && z + i < size; i++)
		{
			if (b[z + i] < 31)
				printf(".");
			else
				printf("%c", b[z + i]);
		}
		printf("\n");
		z += 10;
	}
}
