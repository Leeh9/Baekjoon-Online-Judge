#include <stdio.h>

int main(void)
{
	int n;
	int m[1000];
	int temp;
	int count = 1;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &m[i]);
	}

	for (int i = 0; i < n; i++) {
		for (int j = count; j < n; j++) {
			if (m[i] < m[j]) {
				temp = m[i];
				m[i] = m[j];
				m[j] = temp;
			}
		}
		count++;
	}

	for (int i = n-1; i >= 0; i--) {
		printf("%d\n", m[i]);
	}

	return 0;
}