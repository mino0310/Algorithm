#include <stdio.h>
int main(void)
{
	int n, m;
	scanf("%d", &n);

	/*if (n == 1)
	{
		scanf("%d", &m);
		printf("%d %d %d", m, m, m);
		return 0;
	}*/
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &m);
		if (i == 1)
			printf("%d ", m);
		if (i == (1 + n) / 2)
			printf("%d ", m);
		if (i == n)
			printf("%d", m);
	}
	return 0;
}
