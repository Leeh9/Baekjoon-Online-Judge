#include <stdio.h>

#define num 10001
int main(void)
{
	int i;
	int j;
	int k[num];
	int c = 0;

	for (i = 1; i <= 10000; i++) {
		if (i < 10)
			k[i] = i + i;
		else if (i < 100)
			k[i] = i + i / 10 + i % 10;
		else if (i < 1000)
			k[i] = i + i / 100 + (i % 100) / 10 + (i % 100) % 10;
		else
			k[i] = i + i / 1000 + (i % 1000) / 100 + ((i % 1000) % 100) / 10 + i % 10;

	}

	for (i = 1; i <= 10000; i++) {
		for (j = 1; j <= 10000; j++) {
			if (i == k[j])
				c = 1;
		}
		if (c == 0)
			printf("%d\n", i);
		c = 0;
	}
	return 0;
}