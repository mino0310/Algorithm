#include <stdio.h>
int main(void)
{
	int a,b,c,saju;
	scanf("%d %d %d", &a, &b, &c);
	saju = a + b + c;
	printf("%s", saju / 100 % 10 % 2 == 0 ? "대박" : "그럭저럭");
	return 0;
}
