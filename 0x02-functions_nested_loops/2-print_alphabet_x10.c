#include "main.h"
/**
  *print_alphabet_x10 - Prints alphabet 10 times
  *
  *return: always 0
  */
void print-alphabet-x10(void)
{
	int n;
	int m;
	for (n = 1; n <= 10; n++)
	{
		for (m = 97; m <= 122; m++)
		{
			_putchar(m);
		}
		_putchar('\n');
	}
}	
