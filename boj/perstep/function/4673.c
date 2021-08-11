#include <stdio.h>


int cal_self(int n)
{
	int sum = n;

	while (n)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int is_self(int n)
{
	for (int i = 1; i <= 10000; i++)
	{
		if (cal_self(i) == n)
			return 1;
	}
	return 0;
}

int main(void)
{
	for (int i = 1; i <= 10000; i++)
	{
		if (!is_self(i))
			printf("%d\n", i);
	}
	return 0;
}
