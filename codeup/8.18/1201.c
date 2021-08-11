#include <stdio.h>
int main(void)
{
	int a;
	scanf("%d", &a);
	if (a > 0)
		printf("%s", "양수");
	else if (a < 0)
		printf("%s", "음수");
	else
		printf("%c", '0');
	return 0;
}
