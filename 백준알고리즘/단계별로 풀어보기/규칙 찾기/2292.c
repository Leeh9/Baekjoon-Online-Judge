#include <stdio.h>

int main(void)
{
	int count=1;
	int n;
	int temp=1;
	int i;

	scanf("%d", &n);

	if (n == 1) {
		count = 1;
	}
	else {
		for (i = 2; i <= n; i++) {
			if (temp + (count - 1) * 6 < i) {
				count++;
				temp = i - 1;
			}
		}
	}

	printf("%d\n", count);
	return 0;
}