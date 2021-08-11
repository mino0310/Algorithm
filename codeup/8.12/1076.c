#include <stdio.h>
int main(void)
{
	char c;
	scanf("%c", &c);
	char i = 97;
	while (i <= c)
	{
		printf("%c ", i);
		i++;
	}
	return 0;
}
