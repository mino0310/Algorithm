#include <stdio.h>
int main(void)
{
	int n, m, i, cnt = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &m);
		if (m % 2 == 0)
			cnt++;
	}
	printf("%d", cnt);
	return 0;
}
