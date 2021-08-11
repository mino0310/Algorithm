#include <stdio.h>
#include <iostream>

int my_abs(int n);

int main(void)
{
    int n, check_arr[101] = {0, }, input_arr[101] = {0, }, j = 1;
    
    scanf("%d", &n);
    scanf("%d", &input_arr[1]);
    for (int i = 2; i <= n; i++){
        scanf("%d", &input_arr[i]);
        check_arr[my_abs(input_arr[i] - input_arr[i - 1])]++;
        printf("now! = %d\n", my_abs(input_arr[i] - input_arr[i - 1]));
    }
    for (int i = 1; i <= n - 1; i++) {
        if (check_arr[i] == 0){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n"); 
    return 0;
}

int my_abs(int n){
    if (n < 0){
        return -n;
    }
    return n;
}
