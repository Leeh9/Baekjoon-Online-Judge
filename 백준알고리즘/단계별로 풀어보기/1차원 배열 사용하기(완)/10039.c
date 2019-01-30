#include <stdio.h>

int main(void)
{
	int str[5];
	int sum = 0;
	int ave;

	for (int i = 0; i < 5; i++) {
		scanf("%d", &str[i]);
		if (str[i] < 40)
			str[i] = 40;
		sum += str[i];
	}
	ave = sum / 5;

	printf("%d\n", ave);

	return 0;
}