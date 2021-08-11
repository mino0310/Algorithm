#include <stdio.h>
#include <vector>
#include <iostream>
#include <algorithm>

int is_prime(int n);

int main(void) {
    int i, cnt, n;

    scanf("%d", &n);
    std::vector<int> output(n + 1);
    int start = n;
    while (n){
        i = 2;
        int tmp = n;
        while (i <= tmp) {
            while (is_prime(i) && tmp % i == 0) {
                output[i]++;
                tmp /= i;
            }
            i++;
        }
        n--;
    }
    printf("%d! = ", start);
    for (int i = 1; i <= start; i++) {
        if (output[i]) {
            printf("%d ", output[i]);
        }
    }
}

int is_prime(int n) {
    
    if (n == 1) return 0;
    if (n == 2) return 1;
    if (n == 3) return 1;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

