#include "main.h"
/**
  *_sqrt_recursion - return natural square root of
  *a number
  *@n: number
  *Return: 0
  */
int square_root(int n, int i)
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square_root(n, 0));
}
/**
  *square_root - recurses to find natural sqrt of n
  *@n: number
  *@i: guess
  *Return: sqrt
  */
int square_root(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (square_root(n, i + 1));
}
