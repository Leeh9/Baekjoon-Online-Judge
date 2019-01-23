#include <stdio.h>
#include <string.h>

int main(void)
{
	char input[100];
	int k;
	int count = 0;

	scanf("%s", input);
	k = strlen(input);

	for (int i = 0; i < k; i++)
	{
		printf("%c", input[i]);
		count += 1;
		if (count == 10) {
			printf("\n");
			count = 0;
		}
	}

	return 0;
}
