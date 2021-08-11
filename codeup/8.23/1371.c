#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			printf(" ");
		}
		printf("*");
		for (int j = 0; j < 2 * i; j++)
		{
			printf(" ");
		}
		printf("*\n");
	}
	for (int i = n ; i > 0; i--)
	{
		for (int j = 0; j < n - i; j++)
		{
			printf(" ");
		}
		printf("*");
		for (int j = 0; j < 2 * (i -1); j++)
		{
			printf(" ");
		}
		printf("*\n");
	}
	return 0;
}
