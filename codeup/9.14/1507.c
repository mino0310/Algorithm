#include <stdio.h>
#include <math.h>

int main(void)
{
	int x1,x2,y1,y2,i, j, sum=0, arr[5][5] = {0, }, d[101][101] = {0, };


	for (i = 1; i <= 4; i++)
	{
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		for (int k = y1; k < y2; k++)
		{
			for (int l = x1; l < x2; l++)
			{
				d[k][l] = 1;
			}
		}
	}
	for (i = 1; i <= 100; i++)
	{
		for (j = 1; j <= 100; j++)
		{
			sum += d[i][j];
		}
	}

	printf("%d", sum);
	return 0;
}
