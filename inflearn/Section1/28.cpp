#include <stdio.h>
#include <vector>
#include <iostream>
#include <algorithm>

// int is_prime(int n);

// int main(void) {
//     int i, cnt = 0, n;

//     scanf("%d", &n);
//     std::vector<int> output(n + 1);
//     int start = n;
//     while (n){
//         i = 2;
//         int tmp = n;
//         while (i <= tmp) {
//             while (is_prime(i) && tmp % i == 0) {
//                 output[i]++;
//                 tmp /= i;
//             }
//             i++;
//         }
//         n--;
//     }
//     if (output[2] > output[5]) cnt = output[5];
//     else cnt = output[2];

//     printf("%d", cnt);
//     return 0;
// }
// int is_prime(int n) {
    
//     if (n == 1) return 0;
//     if (n == 2) return 1;
//     if (n == 3) return 1;
//     for (int i = 2; i < n; i++) {
//         if (n % i == 0) return 0;
//     }
//     return 1;
// }

int main(void)
{
    int n, chk[3] = {0,}, j;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        int tmp = i;
        j = 2;
        while (1) {
            if (tmp % j == 0) {
                tmp /= j;
                if (j == 2) chk[1]++;
                else if (j == 5) chk[2]++;
            }
            else j++;
            if (tmp == 1) break ;
        }
    }
    if (chk[1] > chk[2]) cnt = chk[2];
    else cnt = chk[1];
    printf("%d", cnt);
    return 0;
}