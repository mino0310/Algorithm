#include <stdio.h>
#include <string.h>
int main(void)
{
	char s1[21], s2[21], s3[21];
	int i, j, k;
	scanf("%s %s %s", s1, s2, s3);
	if ((s1[strlen(s1) - 1] == s2[0]) && (s2[strlen(s2) - 1] == s3[0]) && (s3[strlen(s3) - 1] == s1[0]))
		printf("%s", "good");
	else
		printf("%s", "bad");
	return 0;
}
