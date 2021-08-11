#include <stdio.h>
int main(void)
{
	int i, n, res = 0;
	char c = 0;
	scanf("%d", &res);
	while (c != '=')
	{
		scanf("%c", &c);
		if (c == '=')
		{
			printf("%d", res);
			return 0;
		}

		scanf("%d", &n);
		if (c == '+')
			res += n;
		else if (c == '-')
			res -= n;
		else if (c == '*')
			res *= n;
		else if (c == '/')
			res /= n;
	}
	printf("%d", res);
	return 0;
}
