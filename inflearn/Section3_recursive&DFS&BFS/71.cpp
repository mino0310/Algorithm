#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, m, cnt, check[10001];

int main(void)
{
    int d[3] = {1, -1, 5}, pos;
    queue<int> q;

    cin >> n >> m;
    check[n] = 1;
    q.push(n);
    while (!q.empty())
    {
        int x = q.front();

        q.pop();
        for (int i = 0; i < 3; i++)
        {
            pos = x + d[i];
            
            if (pos > 100000 || pos < 1)
                continue;
            if (check[pos] == 0)
            {
                check[pos] = check[x] + 1;
                q.push(pos);    
            }
            else if (pos == m) {
                cout << check[x] << endl;
                exit(0);
            }
        }
    }
    return 0;
}