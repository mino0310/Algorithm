#include <stdio.h>

int main(void)
{
	int n, g, arr[101] ={0,}, min = 1001, midx;
	scanf("%d %d", &n, &g);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++)
	{
		min = 1001;
		if (i % g == 0)
		{
			for (int j = i; j < i + g  && j < n; j++)
			{
				if (arr[j] < min)
				{
					min = arr[j];
				}		
			}
			printf("%d ", min);
		}
	}
	return 0;
}
