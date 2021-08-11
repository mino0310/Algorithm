#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	int c_cnt = 0, cc_cnt = 0;
	char arr[101];
	scanf("%s", arr);
	for (int i = 0; arr[i] != '\0'; i++)
	{
		if (arr[i] == 'c' || arr[i] == 'C')
			c_cnt++;
		if (arr[i] == 'c' || arr[i] == 'C')
		{
			if(arr[i+1] == 'c' || arr[i+1] == 'C')
				cc_cnt++;
		}
	}
	printf("%d\n%d", c_cnt, cc_cnt);
	return 0;
}
