#include <stdio.h>
#include <string.h>

int main(void)
{
	int idx, max = -1, max_idx;
	char input[1000001], sol[30] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ", ss[30] = {0,};
	fgets(input, sizeof(input), stdin);
	for (int i = 0; input[i] != '\0'; i++)
	{
		if (input[i] >= 'a' && input[i] <= 'z')
		{
			idx = input[i] - 'a';
		}
		else if (input[i] >= 'A' && input[i] <= 'Z')
		{
			idx = input[i] - 'A';
		}
		ss[idx]++;
	}

	char c = '?';
	for (int i = 0; i <= 25; i++)
	{
		if (ss[i] > max)
		{
			max = ss[i];
			c = i;
		}
		else if (ss[i] == max)
		{
			c = '?';
		}
	}

	printf("%c", (c == '?')? '?' : c + 65);
	return 0;
}
