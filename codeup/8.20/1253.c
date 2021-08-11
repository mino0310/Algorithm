#include <stdio.h>
int main(void)
{
	int n, m;
	scanf("%d %d", &n, &m);
	if (n >= m)
		for (int i = m; i <= n; i++)
			printf("%d ", i);
	else if (n < m)
		for (int i = n; i <= m; i++)
			printf("%d ", i);
	return 0;
}
