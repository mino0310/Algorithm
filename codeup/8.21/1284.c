#include <stdio.h>

int is_prime(int n)
{
	if (n <= 1)
		return 0;
	if (n % 2 == 0)
		return n == 2 ? 1 : 0;

	for (int i = 3; i * i <= n; i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}


int main(void)
{
	int n, i, j;
	scanf("%d", &n);

	소인수를 배열에 넣는다

	
	for (i = 2; i < 1000000; i++)
	{
		if (is_prime(i))
		{
			for (j = 2;j < 1000000 ; j++)
			{
				if (i * j== n && i <= j && is_prime(j))
	
				{
					printf("%d %d", i, j);
					return 0;
				}	
			}
		}
	}
	printf("%s", "wrong number");
	return 0;
}
