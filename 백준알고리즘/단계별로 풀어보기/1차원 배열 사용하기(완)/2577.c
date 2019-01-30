#include <stdio.h>
#include <string.h>

int main(void)
{
	int a, b, c;
	int x;
	int temp;
	int input[10];
	int output[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int count = 0;
	int count2 = 0;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	x = a * b * c;
	temp = x;

	while (1) {
		if (temp == 0) {
			break;
		}
		temp = temp / 10;
		count++;
	}

	for (int i = count - 1; i >= 0; i--) {
		input[i] = x % 10;
		x /= 10;
	}
	input[count] = '\0';
	count2 = 0;

	for (int j = 0; j < 10; j++) {
		for (int i = 0; i < count; i++) {
			if (j == input[i]) {
				count2++;
			}
		}
		output[j] = count2;
		printf("%d\n", output[j]);
		count2 = 0;
	}

	return 0;
}