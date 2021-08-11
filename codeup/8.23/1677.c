#include <stdio.h>
int main(void)
{
	int a,b;
	scanf("%d %d", &a, &b);
	for (int i = 1; i <= b; i++)
	{
		for (int j = 1; j <= a; j++)
		{
			if ((j == 1 || j == a) && (i == 1 || i == b))
				printf("+");
			else if (i == 1 || i == b)
				printf("-");
			else if (j == 1 || j == a)
				printf("|");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
