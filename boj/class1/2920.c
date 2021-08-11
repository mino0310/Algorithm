#include <stdio.h>
int main(void)
{
	int arr[9] = {0, }, flag = 3;
	
	for (int i = 0 ; i <= 7; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i <= 6; i ++)
	{
		if (arr[i+1] == arr[i] + 1)
			flag = 1;
		else if (arr[i+1] == arr[i] - 1)
			flag = 2;
		else
		{
			printf("mixed");
			return 0;
		}
	}

	if (flag == 1)
		printf("ascending");
	else if (flag == 2)
		printf("descending");
	else if (flag == 3)
		printf("mixed");
	return 0;
}
