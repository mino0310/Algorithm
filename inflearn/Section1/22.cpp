#include <iostream>
#include <stdio.h>
#include <vector>

int main(void)
{
    int n, k, sum = 0, max = -2147483648;

    scanf("%d %d", &n, &k);

    std::vector<int> input(n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &input[i]);
    }
    for (int i = 0; i < k; i++) {
        sum += input[i];
    }
    max = sum;
    for (int i = k; i < n; i++) {
        sum = sum + input[i] - input[i - k];
        if (sum > max) max = sum;
    }

    printf("%d\n", max);

    return 0;
}
// int main(void)
// {
//     std::vector<int> input, sol;
//     int num, k, sum = 0, i = 0, j = 0, max = -2147483648, val;

//     std::cin >> num >> k;

//     for (int i = 0; i < num; i++){
//         std::cin >> val;
//         input.push_back(val);
//     }
    
//     for (std::vector<int>::iterator itr = input.begin(); itr != input.end(); ++itr) {
//         sum = 0;
//         for (int i = 0; i < k; i++) {
//             sum += *(itr + i);
//         }
//         if (sum > max) {
//             max = sum;
//         }
//         if ((itr + k - 1) == input.end()) break ;
//     }
//     std::cout << max << std::end l;

//     return 0;
// }




// 1. 들어온 숫자들을 k개씩 쪼갠 다음 더해서 저장
// 2. 이들 중 최댓값을 출력