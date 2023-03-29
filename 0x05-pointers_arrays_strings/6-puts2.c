#include "main.h"
/**
  *puts2 - print every character of a string
  *@str: string
  */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
