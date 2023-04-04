#include "main.h"
/**
  *_memser -  fills memory with a constant byte
  *@s: address
  *@b: value
  *@n: bytes
  *Return: pointer to the memory area s
  */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
