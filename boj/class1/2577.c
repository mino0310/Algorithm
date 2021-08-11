#include <stdio.h>

int main(void)
{
	int a, b, c, ncnt[11] = {0, };
	long long int res = 0, tmp = 0;
	scanf("%d %d %d", &a, &b, &c);
	res = a*b*c;
	while(res)
	{
		ncnt[res % 10]++;
		res /= 10;
	}

	for (int i = 0; i <= 9; i++)
	{
		printf("%d\n", ncnt[i]);
	}
	return 0;
}
