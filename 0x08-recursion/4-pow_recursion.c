/*
 * 0x08. C - Recursion
 * task 4
 */

/**
 * _pow_recursion - x pow y
 * @x: int
 * @y: int power
 * Return: x pow y (int)
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
