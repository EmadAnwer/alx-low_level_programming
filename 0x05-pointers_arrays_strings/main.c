#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "0123456789";
    puts_half(str);

	str = "01234567891";
    puts_half(str);


	str = "0";
    puts_half(str);

	str = "";
    puts_half(str);
    return (0);

}