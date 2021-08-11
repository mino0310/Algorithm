#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	char p[1001];
	scanf("%s", p);
	if (!strcmp(p, "love"))
	{
		printf("I %s you.", p);
	}
	return 0;
}
