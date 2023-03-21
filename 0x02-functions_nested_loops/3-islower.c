#include "maind.h"
/**
  *_islower - Shows 1 if input is a lower case chararcter.
  Another cases, shows 0
  *
  *@c: The character is ASCII code
  *Return: 1 for lowercase character, 0 for the rest
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	_putchar('\n');
}
