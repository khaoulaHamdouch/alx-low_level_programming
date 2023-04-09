#include <stdlib.h>
#include <stdio.h>
/**
  *main - multiplies two numbers
  *@argc: number of arguments
  *@argv: array of arrguments
  *Return:0
  */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc <= 1)
	{
		printf("Error\n");
	}
	else
		if (i > 1)
		{
			for (i = 1; i < argc; i++)
			{
				mul = mul * atoi(argv[i]);
			}
			printf("%d\n", mul);
		}
}
