#include <stdio.h>

int main(void)
{
	int n;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		if (i > 1)
		{
			for (int k = 1; k < i; k++)
			{
				printf(" ");
			}
		}
		for (int j = n; j >= i; j--)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
