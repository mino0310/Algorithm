#include <stdio.h>
int main(void)
{
	char arr[21];
	scanf("%s", arr);
	for (int i = 0; arr[i] != '\0'; i++)
	{
		printf("%c", arr[i] + 2);
	}
	printf("\n");
	for (int i = 0; arr[i] != '\0'; i++)
	{
		printf("%c", (arr[i] * 7) % 80 + 48); 
	}
	return 0;
}
