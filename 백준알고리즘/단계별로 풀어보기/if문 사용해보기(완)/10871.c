#include <stdio.h>

#define num 10000
int main(void)
{
	int n, x;
	int input[num];

	scanf("%d %d", &n, &x);


	for (int i = 0; i < n; i++) {
		scanf("%d", &input[i]);
		if (input[i] < x)
		{
			printf("%d ", input[i]);
		}
	}
	printf("\n");


	return 0;
}