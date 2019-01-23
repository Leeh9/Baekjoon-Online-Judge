#include <stdio.h>

int main(void)
{
	int x, y;
	int i;
	int k;

	scanf("%d %d", &x, &y);

	if (x == 1)
		i = y;
	else if (x == 2)
		i = 31 + y;
	else if (x == 3)
		i = 31 + 28 + y;
	else if (x == 4)
		i = 59 + 31 + y;
	else if (x == 5)
		i = 90 + 30 + y;
	else if (x == 6)
		i = 120 + 31 + y;
	else if (x == 7)
		i = 151 + 30 + y;
	else if (x == 8)
		i = 181 + 31 + y;
	else if (x == 9)
		i = 212 + 31 + y;
	else if (x == 10)
		i = 243 + 30 + y;
	else if (x == 11)
		i = 273 + 31 + y;
	else
		i = 304 + 30 + y;

	switch (i % 7)
	{
	case 1:
		printf("MON\n");
		break;
	case 2:
		printf("TUE\n");
		break;
	case 3:
		printf("WED\n");
		break;
	case 4:
		printf("THU\n");
		break;
	case 5:
		printf("FRI\n");
		break;
	case 6:
		printf("SAT\n");
		break;
	case 0:
		printf("SUN\n");
		break;
	}

	return 0;
}
