#include <stdio.h>
#include <iostream>

int str_len(char *str);
int max_index(int arr[], int len);

int cnt[11];

int main(void)
{
    char input[101];
    int i, max_idx;
    
    scanf("%s", input);
    i = 0;
    while (input[i]) {
        cnt[input[i] - '0']++;
        i++;
    }
    max_idx = max_index(cnt, 10);
    printf("%d\n", max_idx);

    return 0;
}

int max_index(int arr[], int len)
{
    int i = 0, max = -1, max_index;
    while (i < len) {
        if (arr[i] >= max) {
            max = arr[i];
            max_index = i;
        }
        i++;
    }
    return (max_index);
}