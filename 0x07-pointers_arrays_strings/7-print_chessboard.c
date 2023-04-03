/*
 * 0x07. C - Even more pointers, arrays and strings
 * task 7
 */
#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_chessboard - returns chessboard
 * @a: array refrance
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
