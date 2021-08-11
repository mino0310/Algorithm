#include <stdio.h>
int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a + b > c)
	{
		if (a == b && b == c && c == a)
			printf("%s", "정삼각형");
		else if ((a == b && b != c) || (b == c && c != a) || (c == a && a != b))
			printf("%s", "이등변삼각형");
		else if (a * a + b * b == c * c)
			printf("%s", "직각삼각형");
		else
			printf("%s", "삼각형");
	}
	else
		printf("%s", "삼각형아님");
	return 0;
}
