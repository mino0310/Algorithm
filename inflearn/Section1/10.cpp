#include <stdio.h>
#include <iostream>

int digit_sum(int x);
int max_index(int arr[], int len);
int input[101];

int main(void)
{
    int n, num, i, j, sum, res, max = -2147483648;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);
        sum = digit_sum(num);
        if (sum > max) {
            max = sum;
            res = num;
        }
        else if (sum == max) {
            if (num > res) {
                res = num;
            }
        }
    }
    printf("%d", res);
    return 0;
}

int digit_sum(int x)
{
    int sum = 0;
    while (x)
    {
        sum += x % 10;
        x /= 10;
    }
    return (sum);
}

// int max_index(int arr[], int len)
// {
//     int i, j, max_index, max = -2147483648; 
//     for (i = 0; i < len; i++){
//         if (digit_sum(arr[i]) > max) {
//             max = digit_sum(arr[i]);
//             max_index = i;
//         }
//         else if (digit_sum(arr[i]) == max) {
//             if (arr[i] > arr[max_index]) {
//                 max_index = i;
//             }
//         }
//     }
//     return (max_index);
// }