#include "main.h"
/**
  *int_strlen - return lenght of a string
  *@s: string
  *Return: lenght of string
  */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return(length);
}
