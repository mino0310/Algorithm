#include <stdio.h>
int main(void)
{
	int time, score1, score2, lefttime, goal;
	scanf("%d %d %d", &time, &score1, &score2);

	lefttime = 89 - time;
	goal = lefttime / 5;
	goal++;

	if (score1 + goal > score2)
		printf("%s", "win");

	else if (score1 + goal < score2)
		printf("%s", "lose");
	else
		printf("%s", "same");

	return 0;
}
