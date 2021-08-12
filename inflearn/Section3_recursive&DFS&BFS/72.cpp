#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
    queue<int> q;
    int n, k, i, x, cnt = 0;
 
    cin >> n >> k;

    for (i = 1; i <= n; i++)
        q.push(i);

    while (!q.empty())
    {
        x = q.front();
        q.pop();
        cnt++;
        if (cnt == k) 
        {
            cnt = 0;
            continue;
        }
        else
            q.push(x);
    }
    cout << x << endl;

    return 0;
}