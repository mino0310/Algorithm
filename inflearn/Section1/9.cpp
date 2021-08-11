#include <stdio.h>
#include <iostream>

int make_factor(int n);

int main(void)
{
    int n, i, j;
    scanf("%d", &n);
    int input[50001] = {0, };

    for (i = 1; i <= n; i++)
    {
        for (j = i; j <= n; j += i)
        {
            input[j]++;
        }
    }
    for (i = 1; i <= n; i++)
    {
        printf("%d ", input[i]);
    }
    return 0;
}


// int main(void)
// {
//     int n,i;
//     scanf("%d", &n);
//     for (i = 1; i < n; i++)
//     {
//         printf("%d ", make_factor(i));
//     } 
//     printf("%d", make_factor(i));
//     return 0;
// }

// int make_factor(int n)
// {
//     int factor = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             factor++;
//         }
//     }
//     return (factor);
// }