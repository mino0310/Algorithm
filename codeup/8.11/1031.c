#include <stdio.h>

int dto(int n);

int	main(void)
{
	int n;
	scanf("%d", &n);
	printf("%o\n", n);

	dto(n);

	return 0;
}

int	dto(int n)
{
	int m,r, count;
	if (n / 8 == 0)
		printf("%c", n % 8 + '0');
	else
	{
		dto(n / 8);
		printf("%c", n % 8 + '0');
	
	}
}
