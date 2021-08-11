#include <stdio.h>

int n, m, x;

int min(int a, int b)
{
	return a <= b ? a : b;
}

int max (int a, int b)
{
	return a >= b ? a : b;
}

int mid (int a, int b, int c)
{
	if (a >= b)
	{
		if (c >= a)
		{
			return a;
		}
		else 
		{
			if (c >= b)
				return c;
			else 
				return b;
		}
	}
	else
	{
		if (c >= b)
		{
			return b;
		}
		else
		{
			if (c >= a)
				return c;
			else
				return a;
		}
	}	
}

int main(void)
{
	scanf("%d %d %d", &n, &m, &x);
	printf("%d", mid(n,m,x));
	return 0;
}

