#include "main.h"
/**
  *_strchr - locate a character in a string
  *@s: string
  *@c: character
  *Return: pointer of the first occurance of c in s or NULL
  *if not found
  */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
