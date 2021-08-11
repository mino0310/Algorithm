#include <stdio.h>
int main(void)
{
	int w, h,i,j,n,l,d,x,y,arr[101][101] = {0,};
	scanf("%d %d", &h, &w);
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d %d %d %d", &l, &d, &x, &y);
		if (d == 0)
		{
			for (j = 0; j < l; j++)
			{
				arr[x][y] = 1;
				y++;
			}
		}
		else
		{
			for (j = 0; j < l; j++)
			{
				arr[x][y] = 1;
				x++;
			}
		}
	}
	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= w; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
