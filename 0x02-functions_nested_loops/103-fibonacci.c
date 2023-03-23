#include <stdio.h>
/**
  *main - Entry point
  *description: 'prints the sum of even-valued Fibonacci sequence terms
  *not exeeding 4000000
  *Return: always 0
  */
int main(void)
{
	unsigned long a = 0;
	unsigned long b = 1;
	unsigned long sum;
	float tot;

	while (1)
	{
		sum = a + b;
		if (sum > 4000000)
			break;
		

		if (sum % 2 == 0)
			tot += sum;

		a = b;
		b = sum;
	}
	printf("%.0f\n", tot);
	return (0);
}
