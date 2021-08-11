#include <stdio.h>
int main(void)
{
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	int i = c;
	while(1)
	{
		if(a % i == 0 && b % i == 0 && c % i == 0)
		{	
			printf("%d", i);
			break ;
		}
		i--;

	}
	return 0;
}
