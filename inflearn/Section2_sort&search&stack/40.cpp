#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>


int main(void)
{
    int n, m, i, j, k;
    scanf("%d", &n);
    std::vector<int> set_a(n);
    for(i = 0; i < n; i++) {
        scanf("%d", &set_a[i]);
    }
    scanf("%d", &n);
    std::vector<int> set_b(n);
    for(i = 0; i < n; i++) {
        scanf("%d", &set_b[i]);
    }
    sort(set_a.begin(), set_a.end());
    sort(set_b.begin(), set_b.end());

    for (i = 0, j = 0; i < n && j < m; ){
        if (set_a[i] > set_b[j]) {
            j++;
        }
        else if (set_a[i] < set_b[j]) {
            i++;
        }
        else {
            printf("%d ", set_a[i]);
            i++;
            j++;
        }
    }
    return 0;
}
