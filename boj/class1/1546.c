#include <stdio.h>

int main(void)
{
	int n, score[4] = {0, }, max = 0;
	double d_score[4] = {0, }, sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &score[i]);
		if (score[i] > max)
			max = score[i];
	}

	for (int i = 0; i < n; i++)
	{
		d_score[i] = (double)score[i] / max * 100;
		sum += d_score[i];
	}

	printf("%6lf", sum / n);

	


	return 0;
}
