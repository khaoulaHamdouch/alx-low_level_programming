#include <stdio.h>
/**
  *main - Entry point
  *Description: 'print alphabet lowercase and upercase'
  *Return: always 0
  */
int main(void)
{
	int n = 97;
	int a = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (a <= 90)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
