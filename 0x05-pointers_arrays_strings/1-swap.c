#include "main.h"
/**
  *swap_int - swap values of two integers
  *@a: first integer
  *@b: second integer
  */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
