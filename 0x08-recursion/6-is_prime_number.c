#include "main.h"
/**
  *is_prime_number - check number if prime
  *@n: number
  *Return: 1 if prime, 0 otherwise
  */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number(n, n - 1));
}
/**
  *prime_number - recursive
  *@n: number
  *@i: n
  *Return: 1 if prime, 0 if not
  */
int prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime_number(n, i - 1));
}
