#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

int changes[6] = {500, 100, 50, 10, 5, 1};

int main(void)
{
    int money, i, cnt = 0;

    cin >> money;
    money = 1000 - money;
    for (i = 0; money; i++)
    {
        int tmp = money / changes[i];
        cnt += tmp;
        money %= changes[i];
        
        cout << "money ! = " << money << endl;
    }
    cout << cnt << endl;
    return 0;
}


