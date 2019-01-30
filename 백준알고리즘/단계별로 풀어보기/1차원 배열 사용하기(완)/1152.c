#include <stdio.h>
#include <string.h>

#define num 1000000
int main(void)
{
	char a[num];
	int n = 0;

	gets(a);

	for (int i = 0; i < strlen(a); i++)
	{
		if (a[i] != ' ') {
			if (a[i + 1] == ' ' || a[i + 1] == '\0') {
				n++;
			}
		}
	}
	printf("%d\n", n);
	return 0;
}