#include <stdio.h>
int main(void)
{
	int n, m;
	char c;
	scanf("%d %d %c", &n, &m, &c);

	if (c == 'L')
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j < i; j++)
			{
				printf(" ");
			}
			for (int j = 1; j <= m; j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	else if (c == 'R')
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n - i; j++)
			{
				printf(" ");
			}
			for (int j = 1; j <= m; j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}

	return 0;
}
