#include <stdio.h>
#include <iostream>

int win(int a, int b);

int info_a[101];
int info_b[101];

int main(void)
{
    int n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++){
        scanf("%d", &info_a[i]);
    }

    for (i = 0; i < n; i++){
        scanf("%d", &info_b[i]);
    }

    for (int i = 0; i < n; i++){
        if (win(info_a[i], info_b[i]) > 0) {
            printf("A\n");
        }
        else if (win(info_a[i], info_b[i]) == 0)
            printf("D\n");
        else
            printf("B\n");
    }


    return 0;
}

int win(int a, int b)
{
    int ret;
    if (a == b) return 0; 

    if (a > b) {
        if (a == 3 && b == 1) {
            return (-1);
        }
        return (1);
    }
    else {
        if (a == 1 && b == 3)
            return (1);
        return (-1);
    }
}
// 누가 이겼는지도 말해줘야 한다. 그저 승패가 나는지 아닌지가 아니다. 
/* 3(보) > 2(바위) > 1(가위) > 3(보) 이런식으로 승부가 나겠네 
*/