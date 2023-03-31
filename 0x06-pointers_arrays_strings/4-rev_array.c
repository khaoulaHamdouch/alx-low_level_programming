#include "main.h"
/**
  *reverse_aray - reverse the content of an array of integers
  *@a: input
  *@n: input
  *Return: 0
  */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n--; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
