#include "main.h"

void print_alphabet(void)
{
	char letter = 'a';
	while(letter <= 'z')
	{
		_putchar(letter++);
	}
	_putchar('\n');
}
