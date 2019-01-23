#include <stdio.h>

int main(void)
{
	int n;
	int han = 0;
	int i;
	int a, b, c;

	scanf("%d", &n);

	if (n < 100) {
		han = n;
	}
	else if (n >= 100 && n <= 1000) {
		han = 99;
		for (i = 100; i <= n; i++) {
			a = i / 100;
			b = (i % 100) / 10;
			c = i % 10;
			if ((a - b) == (b - c)) {
				han++;
			}
		}
	}
	printf("%d\n", han);


	return 0;
}