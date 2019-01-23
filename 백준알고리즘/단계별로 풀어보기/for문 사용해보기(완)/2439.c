#include <stdio.h>

int main(void)
{
	int n;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		if (i < n)
		{
			for (int k = 0; k < n - i; k++)
			{
				printf(" ");
			}
		}
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
