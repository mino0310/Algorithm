#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	if (n > 20)
		printf("%s", "비만");
	else if (n > 10)
		printf("%s", "과체중");
	else
		printf("%s", "정상");
	return 0;
}
