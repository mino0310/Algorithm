#include <stdio.h>

double x; 

long long int f(double m)
{
	long long int t = (long long int)m;
	
	return t < m ? m + 1 : m;
}

int main(void)
{
	scanf("%lf", &x);
	printf("%lld\n", f(x));
	return 0;
}
