#include <stdio.h>
/**
  *main - Entry point
  *description: 'computes and peints sum of all multiples of 3 or 5 that
  *are below 1024'
  *return: always 0
  */
int main(void)
{
	int n, sum = 0;
	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
			sum +=n;
	}
	printf("%d\n", sum);
	return (0);
}
