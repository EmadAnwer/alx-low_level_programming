/*
 * 0x08. C - Recursion
 * task 6
 */
/**
 * check_prime - x pow y
 * @n: int
 * @factor: int factor
 * Return: sqrt int
 */
int check_prime(int factor, int n)
{
	/*bad algorithm*/
	if (factor == n)
		return (1);
	if (n % factor == 0)
		return (0);
	return (check_prime(factor + 1, n));
}
/**
 * is_prime_number - prime number cheaker
 * @n: int
 * Return: returns 1 if prime
 */
int is_prime_number(int n)
{
	if (n == 1 || n == -1)
		return (0);
	return (check_prime(2, n));
}
