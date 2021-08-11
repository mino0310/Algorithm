#include <stdio.h>

int main(void)
{
	int n, cnt = 0, res[81] = {0, }, sum = 0, i, j;
	char input[][81] = {0, };
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%s", input[i]);
	for (i = 0; i < n; i++)
	{
		sum = 0; 
		cnt = 0;
		for (j = 0; input[i][j] != '\0'; j++)
		{
			if (input[i][j] == 'O')
			{
				cnt++;
				res[j] = cnt;
			}
			else if (input[i][j] == 'X')
			{
				cnt = 0;
				res[j] = cnt;
			}
			sum += res[j];
		}
		printf("%d\n", sum);
	}
	return 0;
}

