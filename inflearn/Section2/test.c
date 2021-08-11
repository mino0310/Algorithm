#include <stdio.h>

int main(void)
{
    int a, b, c;
    a = 1;
    b = 3;
    c = 2;

    int min;
    min = (a > b) ? ((b < c) ? c : b) : (a < c) ? a : ((c < b) ? c : b);

    printf("%d", min);
    return 0;

}