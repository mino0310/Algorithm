#include <stdio.h>
int main(void)
{
	char arr[31];
	fgets(arr, 31, stdin);
	printf("%s", arr);

	return 0;
}
