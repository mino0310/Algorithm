#include <stdio.h>
#include <iostream>

int main(void)
{
    int alert_time = 0, i, time, max, data, conti_flag = 0;
    int max_time = 0, beep = 0;
    scanf("%d %d", &time, &max);
    for (i = 0; i < time; i ++) {
        if (conti_flag == 0) alert_time = 0;
        scanf("%d", &data);
        if (data > max){
            alert_time++;
            beep++;
            conti_flag = 1;
        }
        else
            conti_flag = 0;
        if (conti_flag == 1 && alert_time > max_time){
            max_time = alert_time;            
        }
    }
    if (beep == 0) {
        printf("-1\n");
        return 0;
    }
    printf("%d", max_time);
    return 0;
}

// 1. 소음 측정
// 2. 경고음 알람
// 3. N초의 측정치 중 M값을 넘은 시간을 반환.
// 중복된 시간을 측정한다. 중복될 때는 ++ 그래서 최고값을 기억하는 것이지.
// 그리고 최고값을 반환하는 것. 