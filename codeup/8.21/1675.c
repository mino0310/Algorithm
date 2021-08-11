#include <stdio.h>
int main(void)
{
	char c;
	while((c = getchar()) != EOF)
	{	
		if (c <= 'z' && c >= 'a')
		{
			if (c == 'a' || c == 'b'|| c == 'c')
			{
				c += 23;
			}
			else
			{	
				c = c - 3;
			}
			printf("%c", c);
		}
		else
			printf("%c", c);

	}
	return 0;
}
