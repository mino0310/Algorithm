#include <stdio.h>
int main(void)
{
	char arr[91];
	int narr[129] = {0, };
	fgets(arr, 91, stdin);
	for (int i = 0; arr[i] != '\0'; i++)
	{
		if (arr[i] >= 'a' && arr[i] <= 'z')
		{
			narr[arr[i]]++;
		}
	}
	for (int i = 'a'; i <= 'z'; i++)
	{
		printf("%c:%d\n", i, narr[i]);
	}
	return 0;
}
