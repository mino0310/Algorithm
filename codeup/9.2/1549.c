#include <stdio.h>
#include <stdlib.h>
long long int n;

long long int abs(long long int n)
{
	if (n > 0)
		return n;
	else if (n == 0)
		return 0;
	else
		return -n;
}
int main(void)
{
	scanf("%lld", &n);
	printf("%lld\n", abs(n));
	return 0;
}
