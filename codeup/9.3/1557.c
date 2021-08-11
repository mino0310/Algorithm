#include <stdio.h>

int n;

int f(int k)
{
	int cnt = 0;
	for (int i = 1; i <= k; i++)
	{
		if (k % i == 0)
			cnt++;
	}
	return cnt;
}

int main(void)
{
	scanf("%d", &n);
	printf("%d", f(n));
	return 0;
}

