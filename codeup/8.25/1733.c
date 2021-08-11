#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char arr[200];
	scanf("%s", arr);
	if (!strcmp(arr,"IOI"))
	{
		printf("%s", "IOI is the International Olympiad in Informatics.");
	}
	else
		printf("%s", "I don't care.");
	return 0;
}
