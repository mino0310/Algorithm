#include <stdio.h>
int main(void)
{
	char n, m;
	scanf("%c %c", &n, &m);
	for (int i = n; i <= m; i++)
		printf("%c ", i);
	return 0;
}
