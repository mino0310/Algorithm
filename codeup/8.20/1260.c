#include <stdio.h>
int main(void)
{
	int n, m, i, sum = 0;
	scanf("%d %d", &n, &m);
	for (i = n; i <= m; i++)
	{
		if (i % 3 == 0)
			sum += i;
	}
	printf("%d", sum);
	return 0;
}
