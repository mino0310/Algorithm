#include <stdio.h>

int arr[1001];

int main(void)
{
	int n, temp, i, j, index, min = 1001;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < n; i++)
	{
		min = 1001;
		for (j = i; j < n; j++)
		{
			if (arr[j] < min)
			{
				min = arr[j];
				index = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}

	for (i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}
}
