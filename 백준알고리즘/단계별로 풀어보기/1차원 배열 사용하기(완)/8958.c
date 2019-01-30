#include <stdio.h>
#include <string.h>

#define num 80
int main(void)
{
	char input[num];
	int a;
	int sum = 0;
	int count = 1;
	
	scanf("%d", &a);
	getchar();

	for (int i = 0; i < a; i++) {
		gets(input);
		for (int j = 0; j < strlen(input); j++) {
			if (input[j] == 'O') {
				sum += count;
				count++;
			}
			else
				count = 1;
		}
		printf("%d\n", sum);
		sum = 0;
		count = 1;
	}
	return 0;
}