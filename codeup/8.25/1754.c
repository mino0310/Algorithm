#include <stdio.h>
#include <string.h>

int main(void)
{
	char arr1[101], arr2[101];
	scanf("%s %s", arr1, arr2);
	
	if (strlen(arr1) > strlen(arr2))
	{
		printf("%s %s", arr2, arr1);
		return 0;
	}
	else if (strlen(arr1) < strlen(arr2))
	{
		printf("%s %s", arr1, arr2);
		return 0;
	}
	if (strcmp(arr1, arr2) > 0)
		printf("%s %s", arr2, arr1);
	else if (strcmp(arr1, arr2) < 0)
		printf("%s %s", arr1, arr2);
	else
		printf("%s %s", arr2, arr1);
	return 0;
}

