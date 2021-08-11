#include <stdio.h>
#include <stdbool.h>
int n;

bool prime(int n)
{
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return !n;
	}
	return n;
}

int main(void)
{
	scanf("%d", &n);
	if (prime(n)) printf("prime");
	else printf("composite");
	return 0;
}
