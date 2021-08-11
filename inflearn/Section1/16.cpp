#include <stdio.h>
#include <iostream>
#include <algorithm>

int my_strlen(char arr[]);
void cnt_check(char input[], int cnt[]);

int cnt_1[100];
int cnt_2[100];

int main(void)
{
    int i, j, len_1 = 0;
    char input1[101]= {0, }, input2[101] = {0, };
    scanf("%s", input1);
    scanf("%s", input2);
    len_1 = my_strlen(input1);

    cnt_check(input1, cnt_1);
    cnt_check(input2, cnt_2);

    for (i = 0; i < len_1; i++){
        if (cnt_1[i] != cnt_2[i]){
            printf("NO\n");
            exit(0);
        }
    }
    printf("YES\n");
    return 0;
}

void    cnt_check(char input[], int cnt[])
{
    int i;
    for (i = 0; input[i]; i++){
        if (input[i] >= 'a' && input[i] <= 'z'){
            cnt[input[i] - 'a']++;
        }
        else if( input[i] >= 'A' && input[i] <= 'Z') {
            cnt[input[i] - 'A']++;
        }
    }
}

int my_strlen(char arr[]){
    int len = 0;

    while (*arr){
        len++;
        arr++;
    }
    return (len);
}
