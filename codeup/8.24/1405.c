#include <stdio.h>
int main(void)
{
	int n, arr[1001], tmp,i,j;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (j = 0; j < n; j++)
	{
		printf("%d ", arr[j]);
	}
	printf("\n");
	for (i = 1; i < n; i++)
	{
		tmp = arr[0];
		for (j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[--j] = tmp;
		for (j = 0; j < n; j++)
		{
			printf("%d ", arr[j]);
		}
		printf("\n");
	}

	return 0;
}
