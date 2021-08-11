#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	if (n >= 90) printf("%c", 'A');
	else if (n >= 70) printf("%c", 'B');
	else if (n >= 40) printf("%c", 'C');
	else printf("%c", 'D');
	return 0;
}
