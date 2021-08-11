nclude <stdio.h>

int arr[3];

int main(void)
{
	int temp, i, j, index, min = 1001;
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < 3; i++)
	{
		min = 1001;
		for (j = i; j < 3; j++)
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

	for (i = 0; i < 3; i++)
	{
		printf("%d\n", arr[i]);
	}
}
