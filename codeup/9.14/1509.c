#include <stdio.h>

int main(void)
{
	int input[15] = {0, }, map[105][105] ={0, }, flag = 0;

	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			scanf("%d", &map[i][j]);
		}
	}
	
	for (int i = 1; i <= 10; i++)
	{
		scanf("%d", &input[i]);
	}

	for (int i = 1; i <= 10; i++)
	{
		flag = 0;
		for (int j = 10; j >= 1; j--)
		{
			if (map[j][i] > 0 && input[i] == 1)
			{
				printf("%d crash\n", i);
				flag = 1;
				break ;
			}
			if (map[j][i] < 0 && input[i] == 1)
			{
				printf("%d fall\n", i);
				flag = 2;
				break ;
			}
		}
		if (flag == 0 && input[i] == 1)
			printf("%d safe\n", i);
	}

	return 0;
}
