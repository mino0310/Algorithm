#include <stdio.h>

int dth(int n);

int main(void)
{
	int n;
	scanf("%d", &n);
	dth(n);
	
	return 0;
}

int  dth(int n)
{
	if (n / 16 == 0)
		printf("%c", "0123456789ABCDEF"[n % 16]);
	else
	{
		dth(n / 16);
		printf("%c", "0123456789ABCDEF"[n % 16]);
	}
}
