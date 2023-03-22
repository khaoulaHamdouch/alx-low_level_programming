#include <stdio.h>
/**
  *main - Entry point
  *description: 'prints first 50 Fibonacci numbers, starting with 1 and 2
  *separated by comma followed by a new line'
  *Return: always 0
  */
int main(void)
{
	int n;
	unsigned long a = 0;
	unsigned long b = 1;
	unsigned long sum = 0;

	for (n = 0; n < 50; n++)
	{
		sum = a + b;
		printf("%lu", sum);

		a = b;
		b = sum;

		if (n == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
