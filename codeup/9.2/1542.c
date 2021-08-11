#include <stdio.h>

int n;

void f(int n)
{
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			printf("%s", "composite");
			return ;
		}
	}
	printf("%s", "prime");
	return ;
}

int main(void)
{
	scanf("%d", &n);
	f(n);
	return 0;
}
