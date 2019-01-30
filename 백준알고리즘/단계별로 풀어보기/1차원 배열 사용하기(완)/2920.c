#include <stdio.h>
#include <string.h>

int main(void)
{
	int str[8];
	int asc = 0;
	int des = 0;
	int mix = 0;


	for (int i = 0; i < 8; i++)
		scanf("%d", &str[i]);

	for (int i = 0; i < 8; i++) {
		if (str[i] == i + 1)
			asc++;
		else if ((str[i] + i) == 8)
			des++;
	}

	if (asc == 8)
		printf("ascending\n");
	else if (des == 8)
		printf("descending\n");
	else
		printf("mixed\n");

	return 0;
}