#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
int	solution(int n)
{
	char *num1 = (char *)malloc(sizeof(char) * 10);
	char *num2 = (char *)malloc(sizeof(char) * 10);
	int rem = 0;
	int mo = 0;
	int i = 0;
	int answer = 0;

	while (n)
	{
		rem = n % 3;
		mo = n / 3;
		num1[i] = rem + '0'; 
		n /= 3;
		i++;
	}
	num1[i] = '\0';
	i = 0;

	while (i < strlen(num1))
	{
		answer = answer * 3 + (num1[i] - '0') ;
		i++;
	}
	return answer;
}

int main(void)
{
	printf("computer: 7, me: %d", solution(45));
	printf("computer: 229, me: %d", solution(125));
	return 0;
}
