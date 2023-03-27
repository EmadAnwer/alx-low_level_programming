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
    char s[10] = "My School";
	char p[11] = "My SchoolE";
	char xp[1] = "";
    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);



    

    printf("%s\n", p);
    rev_string(p);
    printf("%s\n", p);


	 printf("%s\n", xp);
    rev_string(xp);
    printf("%s\n", xp);
    return (0);

}