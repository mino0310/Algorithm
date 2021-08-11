#include <stdio.h>


int digit_sum(int n)
{
	int len = 0, k = n, sum = 0;
	while (k)
	{
		len++;
		k /= 10;
	}
	while(len--)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;

}

int main(void)
{
	int n,k,len = 0;
	scanf("%d", &n);
	k = digit_sum(n);
	while (k >= 10)
	{
		k = digit_sum(k);
	}
	printf("%d", k);
	return 0;
}
