#include <stdio.h>

int main(void)
{
	int k[1001] = {0, }, n;
	char arr[1001][1001] = {0, };

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %s", &k[i], arr[i]);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; arr[i][j] != '\0'; j++)
		{
			for (int l = 0; l < k[i]; l++)
			{
				printf("%c", arr[i][j]);
			}
		}
		printf("\n");
	}

	return 0;
}
