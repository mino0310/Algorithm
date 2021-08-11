#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	for (int i = 2; i * i <= n ;i++)
	{
		if (n % i == 0 && i != n)
		{
			printf("not prime");
			return 0;
		}
	}
	printf("prime");	

	return 0;
}
