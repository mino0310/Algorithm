#include <stdio.h>
int main(void)
{
	int size, min = 24, min_index;
	scanf("%d", &size);
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			min_index = i;
		}
	}
	printf("%d", min);
	return 0;
}
