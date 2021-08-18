#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
int main(void)
{
    int i, n, tmp, sum = 0;
    priority_queue<int> q1, q2;
    vector<int> v1, v2;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        cin >> tmp;
        v1.push_back(tmp);
        q1.push(-tmp);
    }
    for (i = 1; i <= n ; i++)
    {
        cin >> tmp;
        q2.push(tmp);
        v2.push_back(tmp);
    }
    for (i = 1; i <= n; i++)
    {
        sum += (-q1.top()) * q2.top();
        q1.pop();
        q2.pop();
    }
    cout << sum << endl;

    return 0;
}