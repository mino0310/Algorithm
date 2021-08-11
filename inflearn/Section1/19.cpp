#include <stdio.h>
#include <iostream>

int arr[101];

int main(void) {
    int n, sum = 0, angry = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++){
        angry = 0;
        for (int j = i; j < n - 1; j++){
            if (arr[i] > arr[j + 1]){
                angry = 1;
            }
            else {
                angry = 0;
                break ;
            }
        }
        if (angry == 1) sum++;
    }
    printf("%d\n", sum);
    return 0;
}