#include <iostream>

using namespace std;

int factorial(int a)
{
    if (a == 1) return 1;
    else {
        return a * factorial(a - 1);
    }
}

/*
int main(void)
{
    int n, res, r;

    cin >> n >> r;

    res = (factorial(n) / factorial(n - r)) / factorial(r);

    cout << res << endl;

    return 0;
}
*/