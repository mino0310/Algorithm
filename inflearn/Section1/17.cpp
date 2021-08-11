#include <stdio.h>
#include <algorithm>

int sigma(int n);

int main(void)
{
    int n, sum, stu_sol[11] = {0, }, stu_num[11] = {0, };

    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d %d", &stu_num[i], &stu_sol[i]);
    }
    for (int i = 0; i < n; i++) {
        if (stu_sol[i] == sigma(stu_num[i])) {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}

int sigma(int n)
{
    int sum = 0;
    while (n){
        sum += n;
        n--;
    }
    return (sum);
}