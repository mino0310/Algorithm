#include <stdio.h>
int main(void)
{
	char arr[101];
	int cnt = 0;
	fgets(arr, 101, stdin);
	for (int i = 0; arr[i] != '\0'; i++)
	{
		if (arr[i] == 'l' && arr[i+1] == 'o' && arr[i+2] == 'v' && arr[i+3] == 'e')
			cnt++;
	}
	printf("%d", cnt);
	return 0;
}
