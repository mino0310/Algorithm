#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int cnt = 0, i = 0;
	char input[1000001];
	fgets(input, 1000001, stdin);
	/*while (input[i] != ' ')
	{
		i++;
	}*/
	while (input[i] != '\0')
	{
		if (input[i] == ' ')
			cnt++;
	}
	printf("%d", cnt);

	return 0;
}
