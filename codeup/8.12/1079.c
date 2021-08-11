#include <stdio.h>
int main(void)
{
	char c, k;
	do
	{
		scanf("%c", &c);
		k = getchar();
		printf("%c", c);
		printf("\n");
	}while (c != 'q');
	return 0;
}
