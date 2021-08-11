#include <stdio.h>
int main(void)
{
	int n, cnt = 0;
	scanf("%d", &n);
	for (int i = 0; n != 0; i++)
	{
		n = n / 10;
		cnt++;
	}
	printf("%d", cnt);
	return 0;
}
