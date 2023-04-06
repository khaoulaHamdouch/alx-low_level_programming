#include "main.h"
/**
  *is_palindrome - check string if palindrome
  *@s: input
  *Return: 1 if palindrome, 0 if not
  */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (palindrome(s, 0, string_length(s)));
}
/**
  *string_length - check characters recursively
  *@s: string
  *Return: length of string
  */
int string_length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + string_length(s + 1));
}
/**
  *palindrome - checks characters recur
  *@s: string
  *@i: chihaja
  *@len: length
  *Return: 1 if palindrome, 0 if not
  */
int palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s - len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (palindrome(s, i + 1, len - 1));
}
