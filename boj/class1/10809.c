#include <stdio.h>
#include <string.h>

int main(void)
{
	int idx;
	char input[101] = {0, }, output[27];
	memset(output, -1, 27);
	scanf("%s", input);

	for (int i = 0; input[i] != '\0'; i++)
	{
		idx = input[i] - 'a';
		if (output[idx] == -1)
		{
			output[idx] = i;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		printf("%d ", output[i]);
	}
	return 0;
}
