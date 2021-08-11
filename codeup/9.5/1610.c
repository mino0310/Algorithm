#include <stdio.h>

char *mysubstr(char *str, int start, int count)
{
	for (int i = start; i < start + count; i++)
	{	
		printf("%c", str[i]);
	}

}

int main(void)
{
	int start, count;
	char arr[101];
	scanf("%s", arr);
	scanf("%d %d", &start, &count);
	mysubstr(arr, start, count);
	
	
	return 0;
}
