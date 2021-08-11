#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		if (i == 1 || i == n)
		{
			for (int j = 1; j <= n; j++)
			{
				printf("*");
			}
		}
		else
		{
			printf("*");
			for (int k = 2; k <= n - 1; k++)
			{
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
