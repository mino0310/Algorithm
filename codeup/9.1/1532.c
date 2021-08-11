#include <stdio.h>

long long int f(void)
{
	return -2147483649;
}

int main(void)
{
	f();

	return 0;
}
