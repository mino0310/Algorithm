#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Loc {
    int x, y;
    Loc(int a, int b)
    {
        x = a;
        y = b;
    }
    bool operator<(const Loc &tmp)const
    {
        if (x != tmp.x) {
            return x < tmp.x;
        }
        if (y != tmp.y) {
            return y < tmp.y;
        }
    }
};

int main(void)
{
    int n, i, a, b;
    vector<Loc> v;
    cin >> n;

    
    for (i = 0; i < n; i++)
    {
        cin >> a >> b;
        v.push_back(Loc(a, b));
    }
    sort(v.begin(), v.end());
    for (i = 0; i < v.size(); i++)
    {
        cout << v[i].x << " " << v[i].y << "\n";
    }

    return 0;
}