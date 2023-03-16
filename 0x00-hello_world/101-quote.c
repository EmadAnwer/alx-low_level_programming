#include <unistd.h>
/**
 * main - Entry point
 *
 * prints and that piece of art is useful" - Dora Korpar, 2015-10-19
 * Return: Always 1 (Success)
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
		 sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19"));
	return (1);
}
