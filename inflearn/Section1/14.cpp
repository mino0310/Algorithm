#include <stdio.h>
#include <iostream>

int reverse(int x);
bool isPrime(int x);

int main(void){
    int n, ret, input;

    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        scanf("%d", &input);
        ret = reverse(input);
        if (isPrime(ret)){
            printf("%d ", ret);
        }
    }
    return 0;
}

// 자연수를 뒤집는 함수
int reverse(int x)
{
    int ret = 0;
    while (x){
        ret = ret * 10 + (x % 10);
        x /= 10;
    }
    return (ret);
}

// 자연수가 소수인지 판단하는 함수
bool isPrime(int x)
{
    int i = 2;
    if (x == 1) return (false);
    while (i < x) {
        if (x % i == 0) return (false);
        i++;
    }
    return (true);
} 