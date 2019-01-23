#include <stdio.h>

int main(void)
{
	char input[101];
	int n;
	int sum = 0;
	scanf("%d", &n);
	scanf("%s", input);

	for (int i = 0; i < n; i++)
	{
		sum += (input[i] - '0');
	}
	printf("%d\n", sum);
	return 0;
}
