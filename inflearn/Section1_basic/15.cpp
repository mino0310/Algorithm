#include <stdio.h>
#include <iostream>

bool isPrime(int x);
int main(void)
{
    int n, cnt = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        if (isPrime(i)) {
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}

bool isPrime(int x)
{
    int i = 2;
    if (x == 1) return (false);
    else if (x != 2 && x % 2 == 0) return (false);
    while (i * i <= x) {
        if (x % i == 0) return (false);
        i++;
    }
    return (true);
<<<<<<< HEAD
} 
=======
} 
>>>>>>> 2c2cb1fd04d85c23438d043d8a1e924cf03062d4
