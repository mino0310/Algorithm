#include <stdio.h>
int n;

long long int d[110];

long long int f()
{
	long long int min = 9223372036854775807;
	int index;
	for (int i = 1; i <= n; i++)
	{
		if (d[i] < min)
		{
			min = d[i];
			index = i;
		}
	}
	return min;
}
int main(void)
{
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		scanf("%lld", &d[i]);
	}
	printf("%lld", f());

	return 0;
}
