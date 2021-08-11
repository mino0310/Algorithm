#include <stdio.h>
int main(void)
{
	double hei, kg, res;
	scanf("%lf %lf", &hei, &kg);
	if (hei >= 160)
		res = ((kg - (hei - 100) * 0.9) * 100) / ((hei - 100) * 0.9);
	else if (hei >= 150)
		res = (kg - (((hei - 150) / 2) + 50)) * 100 / (((hei - 150) / 2) + 50);
	else
		res =((kg - (hei - 100)) * 100) / (hei - 100);
		
	if (res > 20.0)
		printf("%s", "비만");
	else if (res > 10.0)
		printf("%s", "과체중");
	else
		printf("%s", "정상");
	return 0;
}
