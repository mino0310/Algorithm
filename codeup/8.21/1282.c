#include <stdio.h>
int main(void)
{
	unsigned int n,k,i,j, sqrt = 0;
	scanf("%u", &n);
	for (i = 1; i * i <= n; i++)
	{
		;
	}
	sqrt = i - 1;
	k = n - sqrt * sqrt;

	printf("%u %u", k, i - 1);

	return 0;

}
