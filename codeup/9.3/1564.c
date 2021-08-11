#include <stdio.h>

int a, b;

int gcd(int n, int m)
{
	if (n < m)
	{
		int tmp;
		tmp = n;
		n = m;
		m = tmp;
	}

	while (m != 0)
	{
		int tmp;
		tmp = n % m;
		n = m;
		m = tmp;
	}
	return n;
}

int main(void)
{
	scanf("%d %d", &a, &b);
	printf("%d\n", gcd(a,b));
	return 0;
}
