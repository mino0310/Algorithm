#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	char name[n][100];
	int score[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%s", name[i]);
		scanf("%d", &score[i]);
	}

	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n - 1; j++)
		{
			if (score[j] > score[j+1])
			{
				int tmp;
				char *ctmp = malloc(sizeof(char) * 100);
				tmp = score[j];
				score[j] = score[j+1];
				score[j+1] = tmp;
				strcpy(ctmp, name[j]);
				strcpy(name[j], name[j+1]);
				strcpy(name[j+1], ctmp);
				free(ctmp);
			}
		}
	}

	printf("%s", name[n-3]);


	return 0;
}
