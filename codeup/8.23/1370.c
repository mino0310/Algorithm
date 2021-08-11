#include <stdio.h>
int main(void)
{
	int h, r,i,j,k,l;
	scanf("%d %d", &h, &r);
	for (l = 0; l < r; l++)
	{
		for (i = 0; i < h; i++)
		{
			for (j = 0; j < i; j++)
			{
				printf(" ");
			}
			printf("*\n");
		}
		i--;
		for (k = i; k > 0; k--)
		{
			for (j = 1; j < k; j++)
			{
				printf(" ");
			}
			printf("*\n");
		}
	}
	return 0;
}
