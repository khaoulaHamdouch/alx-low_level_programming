#include "main.h"
/**
  *rev_string - reverse a string
  *@s: string
  */
void rev_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
