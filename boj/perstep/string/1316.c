#include <stdio.h>

int main(void)
{
	char input[101][101] = {0, };
	int i,j,n, count[30] = {0, }, cnt=0;
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%s", input[i]);
	}

	for (i = 0; i < n; i++)
	{
		printf("%s\n", input[i]);
	}

	return 0;
}
