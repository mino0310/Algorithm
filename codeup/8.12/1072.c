#include <stdio.h>
int main(void)
{
	int n, m;
	scanf("%d", &n);
start:
	scanf("%d", &m);
	printf("%d\n", m);
	n--;
	if (n > 0)
		goto start;
	return 0;
}
