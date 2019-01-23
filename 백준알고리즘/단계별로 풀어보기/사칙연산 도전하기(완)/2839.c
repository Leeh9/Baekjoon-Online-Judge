#include <stdio.h>

int main(void)
{
	int n;
	int k;
	int count = 0;

	scanf("%d", &n);

	while (1) {
		if (n % 5 == 0) {
			k = n / 5;
			printf("%d\n", k + count);
			break;
		}
		if (n == 1 || n == 2 || n == 4) {
			printf("-1\n");
			break;
		}
		if (n % 5 != 0 && n % 3 == 0) {
			if (((n % 5) % 3 == 0) && n != 3) {
				count += n / 5;
				n -= (n / 5) * 5;
				count += n / 3;
				printf("%d\n", count);
				break;
			}
			else {
				while (1) {
					n -= 3;
					count += 1;
					if (n % 5 == 0) {
						printf("%d\n", count + n / 5);
						return 0;
					}
					else if (n == 0) {
						printf("%d\n", count);
						return 0;
					}
				}
			}
		}
		if (n > 5)
		{
			n -= 5;
			count += 1;
		}
	}
	return 0;
}