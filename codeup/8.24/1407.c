#include <stdio.h>
int main(void)
{
	char arr[101];
	int i;
	fgets(arr, sizeof(arr), stdin);
	for (i = 0 ; arr[i] != '\0'; i++)
	{
		if (arr[i] != ' ')
			printf("%c", arr[i]);
	}

	return 0;
}
