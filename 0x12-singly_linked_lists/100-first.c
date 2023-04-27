/*
 * 0x12. C - Singly linked lists
 * task adv 1
 */
#include <stdio.h>
void before_main(void) __attribute__((constructor));
/**
 * before_main - execute before main
 */

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
