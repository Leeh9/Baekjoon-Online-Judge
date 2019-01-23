#include <stdio.h>

#define num 1000
int main(void)
{
	int n, m;
	int i, j;
	int input[num];
	double output[num];
	int sum = 0;
	double ave;
	int count = 0;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &m);
		for (j = 0; j < m; j++) {
			scanf("%d", &input[j]);
			sum += input[j];
		}
		ave = (double)sum / m;

		for (j = 0; j < m; j++) {
			if (input[j] > ave) {
				count++;
			}
		}
		output[i] = (count / (double)m) * 100;
		sum = 0;
		count = 0;
	}

	for (i = 0; i < n; i++) {
		printf("%.3f%%\n", output[i]);
	}
	return 0;
}