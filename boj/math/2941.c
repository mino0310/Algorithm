#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char s[101] = {0, };
	int count_arr[101] = {0, };
	int count = 0;
	int i = 0;
	scanf("%s", s);
	
	while (s[i])
	{
		if (s[i] == 'c')
		{
			if (s[i+1] == '=' || s[i+1] == '-')
			{
				i += 1;
			}
		}
		else if (s[i] == 'd')
		{
			if (s[i+1] == '-')
			{
				i += 1;
			}
			else if (s[i+1] == 'z' && s[i+2] == '=')
			{
				i += 2;
			}
		}
		else if (s[i] == 'l')
		{
			if (s[i+1] == 'j')
			{
				i += 1;
			}
		}
		else if (s[i] == 'n')
		{
			if (s[i+1] == 'j')
			{
				i += 1;		
			}
		}
		else if (s[i] == 's')
		{
			if (s[i+1] == '=')
			{
				i += 1;
			}
		}
		else if (s[i] == 'z')
		{
			if (s[i+1] == '=')
			{
				i += 1;
			}
		}
		i++;
		count++;
	}
	printf("%d", count);
	return 0;
}




/*
문자열을 전부 순회
{
	해당 문자가 크로아티아 단어 후보군이면
	{
		뒤까지 다 읽어서 해당 단어가 크로아티아 알파벳이면 
			count ++, 알파벳 길이 만큼 점프;
		뒤까지 다 읽어서 해당 단어가 크로아티아 알파벳이 아니면
			읽기 시작한 지점보다 한칸 뒤로 간다음 count++;
	}
	
	해당 단어가 크로아티아 알파벳이 아니면 
		count ++; 
}

이렇게 짜면 되지 않을까. 오홍
*/
