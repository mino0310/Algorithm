#include <stdio.h>
int main(void)
{
	int i, left = 0, right = 0;
	char arr[100001];
	scanf("%s", arr);
	for (int i = 0; arr[i] != '\0'; i++)
	{
		if (arr[i] == '(')
			left++;
		else if (arr[i] == ')')
			right++;
	}
	printf("%d %d", left, right);
	return 0;
}
