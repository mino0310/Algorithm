#include <stdio.h>
int main(void)
{
	int x = 2, y = 2, i, j, map[11][11] = {};

	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			scanf("%d", &map[i][j]);
		}
	} 	 



	printf("sol\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			printf("%d ", map[i][j]);
		}
		printf("\n");
	}

	return 0;
}
