#include <stdio.h>
#include <iostream>

int nbr_len(int n);

int main(void){
    int cnt = 0, i, n;
    
    scanf("%d", &n);

    for (i = 1; i <= n; i++){
        cnt += nbr_len(i);
    }
    printf("%d", cnt);

    return 0;
}

int nbr_len(int n)
{
    int len = 0;

    while (n)
    {
        n /= 10;
        len++;
    }
    return (len);
}