#include <stdio.h>
#include <string.h>

int main(void)
{
	int sum = 0, len;
	char input[16] = {0, };
	scanf("%s", input);
	len = strlen(input);

	for (int i = 0; i < len; i++)
	{
		if (input[i] == '1')
		{
			sum += 2;
		}
		else if (input[i] = 'S' || input[i] == 'V' || input[i] == 'Y' || input[i] =='Z')
		{
			sum += 2 + ((input[i] - 'A')/3);
		}
		else if (input[i] == '0')
		{
			sum += 11;
		}
		else
		{
			sum += 3 + ((input[i] - 'A')/3);
		}
	}

	printf("%d", sum);
	return 0;
}
