#include <stdio.h>

int gcd(int p, int q)
{
	if (p == 0)
		return q;
	return gcd(q%p, p);
}

long long int lcm(int p, int q)
{
	return (long long int)((long long int)p * q / (long long int)gcd(p, q));
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%lld\n", lcm(a,b));
	return 0;
}
