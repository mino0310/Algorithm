#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    int n, cnt = 0;

    cin >> n;

    for (int i = 0; i <= n; i++) 
    {
        for(int j = 0;  j < 60; j++)
        {

            for (int k = 0; k < 60; k++) 
            {
                if (i % 10 == 3 || k / 10 == 3 || k % 10 == 3||j / 10 == 3 || j % 10 == 3)
                    cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}