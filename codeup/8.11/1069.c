#include <stdio.h>
int main(void)
{
	char c;
	scanf("%c", &c);
	switch (c)
	{
		case 'A':
			printf("%s", "best!!!");
			break;
		case 'B':
			printf("%s", "good!!!");
			break;
		case 'C':
			printf("%s", "run!");
			break;
		case 'D':
			printf("%s", "slowly~");
			break;
		default:
			printf("%s", "what?");
	}
	return 0;
}
