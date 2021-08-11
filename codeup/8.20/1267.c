#include <stdio.h>
int main(void)
{
	int n, m, i, sum = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &m);
		if (m % 5 == 0)
		{
			sum += m;
		}
	}
	printf("%d", sum);
	return 0;
}
