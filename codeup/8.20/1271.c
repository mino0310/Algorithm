#include <stdio.h>
int main(void)
{
	int n, m, max = -1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &m);
		if (m > max)
			max = m;
	}
	printf("%d", max);
	return 0;
}
