#include <stdio.h>

int main(void)
{
	int n;
	int a, b;
	int sum = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		sum = a + b;
		printf("%d\n", sum);
	}
	return 0;
}
