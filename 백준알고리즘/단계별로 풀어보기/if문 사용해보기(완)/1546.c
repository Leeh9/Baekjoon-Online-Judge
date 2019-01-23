#include <stdio.h>

#define num 1000
int main(void)
{
	int n;
	int i;
	int temp;
	int input[num];
	double sum = 0;
	double ave;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &input[i]);
	}

	temp = input[0];

	for (i = 1; i < n; i++) {
		if (temp < input[i]) {
			temp = input[i];
		}
	}

	for (i = 0; i < n; i++) {
		sum += ((double)input[i] / temp) * 100;
	}

	ave = sum / n;
	printf("%.2f\n", ave);
	return 0;
}