#include <stdio.h>

int main(void)
{
	int n;

	scanf("%d", &n);

	if (n >= 90)
		printf("A\n");
	else if (n < 90 && n >= 80)
		printf("B\n");
	else if (n < 80 && n >= 70)
		printf("C\n");
	else if (n < 70 && n >= 60)
		printf("D\n");
	else
		printf("F\n");
	return 0;
}