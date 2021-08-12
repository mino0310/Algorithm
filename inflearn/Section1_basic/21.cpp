#include <stdio.h>
#include <iostream>

int main(void)
{
    int card_a[11], card_b[11], i, score_a = 0, score_b = 0; 
    int a_win = 0, b_win = 0;
    for (i = 0; i < 10; i++){
        scanf("%d", &card_a[i]);
    }
    for (i = 0; i < 10; i++){
        scanf("%d", &card_b[i]);
    }`

    for (i = 0; i < 10; i++){
        if (card_a[i] == card_b[i]) {
            score_a++;
            score_b++;
        }
        else if (card_a[i] > card_b[i]){
            score_a += 3;
            a_win = 1;
            b_win = 0;
        }
        else {
            score_b += 3;
            a_win = 0;
            b_win = 1;
        }
    }
    printf("%d %d\n", score_a, score_b);
    if (score_a == score_b) {
        if (!a_win && !b_win) printf("D\n");
        else if (a_win) printf("A\n");
        else if (b_win) printf("B\n");
    }
    else if (score_a > score_b) printf("A\n");
    else printf("B\n");

    return 0;
}

/*
1. 우선 경기를 한다. 숫자가 큰 사람이 이긴다. 승점 3. 
숫자가 같은 경우엔 비긴다. 이럴 땐 승점 1
지면은 승점은 없다.
모든 라운드의 총점을 합해야 한다. 이를 비교하면 된다.

우선 경우의 수에서
1) 모두 비긴다 -> 승부가 나지 않음. D 출력

2) 누군가 이긴다 
2-1) 점수가 달라서 이긴다.
2-1-1) a가 이긴다.
2-1-2) b가 이긴다.


2-2) 점수가 같은데 이긴다. 
2-2-1) a가 최근에 이겨서 이긴다.
2-2-2) b가 최근에 이겨서 이긴다.
*/