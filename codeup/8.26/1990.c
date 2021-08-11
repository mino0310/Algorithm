#include <stdio.h>
#include <string.h>
int main(void)
{
	char arr[502];
       	int sum = 0;
	scanf("%s", arr);
	for (int i = 0; arr[i] != '\0'; i++)
	{
		sum += arr[i] - '0';
	}
	if (sum % 3 == 0)
		printf("1");
	else
		printf("0");
	return 0;
}
