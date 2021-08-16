#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char input[101][101];
	int size = 0;
	scanf("%d", &size);
	for (int i = 0; i < size; i++)
		scanf("%s", input[i]);

	for (int i = 0; i < size; i++)
	{

	}
	return 0;
}

int group_check(char *s)
{
	int arr[30] = 0;
	int i = 0;
	while (s[i])
	{
		arr[s[i] - 97]++;
		i++;
	}

	while (*s)
	{
		if (arr[*s - 97] >= 2)
		{
			return -1;
		}
		s++;
	}
	return 1;
}
