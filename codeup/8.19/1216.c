#include <stdio.h>
int main(void)
{
	int a, b, c, not_pro, do_pro;
	scanf("%d %d %d", &a, &b, &c);
	not_pro = a;
	do_pro = b - c;
	if (do_pro > not_pro)
		printf("%s", "advertise");
	else if (do_pro < not_pro)
		printf("%s", "do not advertise");
	else if (do_pro == not_pro)
		printf("%s", "does not matter");

	/*
	 * if (a > b && a < c)
		printf("%s", "do not advertise");
	else if (b > a && b > c && (b - c > a)) 
		printf("%s", "advertise");
	else
		printf("%s", "does not matter");
		*/
	return 0;
}
