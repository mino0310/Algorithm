#include <stdio.h>

int main(void)
{
	int n, arr[1001][1001] = {0, };
	double aver[1001] = {0, }, cnt[1001] = {0, }, res[1001] = {0, };

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int tmp;
		scanf("%d", &tmp);
		for (int j = 0; j < tmp; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		int sum = 0, saram = 0;
		for (int j = 0; arr[i][j] != '\0'; j++)
		{
			sum += arr[i][j];
			saram++;
		}
		aver[i] = (double)sum / saram;
		
		for (int j = 0; arr[i][j] != '\0'; j++)
		{
			if ((double)arr[i][j] > aver[i])
			{
				cnt[i] += 1;
			}
		}
		res[i] = (cnt[i] / (double)saram) * 100;
	}

	for (int i = 0; i < n; i++)
	{
		printf("%.3lf%%", res[i]);
		printf("\n");
	}


	return 0;
}
