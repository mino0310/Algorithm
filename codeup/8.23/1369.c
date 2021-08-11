#include <stdio.h>
int main(void)
{
	int n, k, i, j;
	scanf("%d %d", &n, &k);
	if (k == 1)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}

	else 
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{	
				if (i == 1 || i == n || j == 1 || j == n)
					printf("*");
				else if (((i + j) % k) == 1)
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}
