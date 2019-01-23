#include <stdio.h>

int main(void) {
	int n;
	int m;
	int two;
	int one;
	int temp;
	int count = 0;

	scanf("%d", &n);
	m = n;
	while (1) {
		two = n / 10;
		one = n % 10;
		temp = one;
		if ((one + two) >= 10)
			one = (one + two) % 10;
		else
			one = one + two;
		two = temp;
		count++;
		n = two * 10 + one;
		if (n == m) {
			printf("%d\n", count);
			break;
		}
	}

	return 0;
}