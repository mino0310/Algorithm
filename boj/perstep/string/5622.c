#include <stdio.h>
#include <string.h>

int main(void)
{
	int sum = 0, len;
	char input[16] = {0, };
	scanf("%s", input);
	len = strlen(input);
	
	for (int i = 0; i < len; i++)
	{
		int num;
		char c = input[i];
		switch(c){
			case 'A':
			case 'B':
			case 'C':
				num = 2;
				break ;
			case 'D':
			case 'E':
			case 'F':
				num = 3;
				break ;
			case 'G':
			case 'H':
			case 'I':
				num = 4;
				break ;
			case 'J':
			case 'K':
			case 'L':
				num = 5;
				break ;
			case 'M':
			case 'N':
			case 'O':
				num = 6;
				break ;
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
				num = 7;
				break ;
			case 'T':
			case 'U':
			case 'V':
				num = 8;
				break ;
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
				num = 9;
				break;
dafault:
				break ;
		}
		sum += num + 1;
	}



	printf("%d", sum);
	return 0;
}
