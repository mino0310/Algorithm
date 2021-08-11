#include <stdio.h>
int main(void)
{
	int time, score, plus;
	scanf("%d %d", &time, &score);
	if (time != 90)
		score++;
	printf("%d", (89 - time) / 5 + score);
	return 0;
}
