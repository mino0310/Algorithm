#include <stdio.h>

int main(void)
{
	int arr[100];
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}


	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < i - 1; j++)
		{
			if (arr[i] > arr[i+1])
			{
				int tmp;
				tmp = arr[i];
				arr[i] = arr[i+1];
				
			}
		}
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
