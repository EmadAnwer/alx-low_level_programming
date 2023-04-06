#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    
    r = wildcmp("main.c", "ma*********************************************************d");
    printf("%d\n", r);
    
    return (0);
}
