#include <stdio.h>
int main(void)
{
	char c;
	while (scanf("%c", &c) != EOF)
	{
		if (c <= 'Z' && c >= 'A')
			c += 32;
		else if (c <= 'z' && c >= 'a')
			c -= 32;
		printf("%c", c);
	}
	return 0;
}
