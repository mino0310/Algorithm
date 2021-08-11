#include <stdio.h>

int gen(int n)
{
	int len=0, k = n, gene = 0;
	while (k)
	{
		len++;
		k /= 10;
	}
	k = n;
	while (len--)
	{
		gene += k % 10;
		k /= 10;
	}
	return gene + n;
}

int is_self(int n)
{
	for (int i = 1; i < 5000; i++)
	{
		if (gen(i) == n)
		{
			return n;
		}
	}
	return 0;
}


int main(void)
{
	int a,b,sum=0;
	scanf("%d %d", &a, &b);
	for (int i = a; i <= b; i++)
	{
		if (!is_self(i))
		{
			sum += i;			
		}
	}
	printf("%d", sum);
	return 0;
}
