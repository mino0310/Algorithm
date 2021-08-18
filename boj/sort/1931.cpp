#include <iostream>
#include <vector>
#include <queue>    
#include <algorithm>

using namespace std;

struct Meet {
    int time_to_start, time_to_end;

    Meet(int a, int b)
    {
        time_to_start = a;
        time_to_end = b;
    }
    bool operator<(const Meet& tmp)const
    {        
        if (time_to_end != tmp.time_to_end)
            return time_to_end < tmp.time_to_end;
        if (time_to_start != tmp.time_to_start)
            return time_to_start < tmp.time_to_start;
    }
};

int main(void)
{
    int n, i, a, b, last_time, cnt = 0;
    vector<Meet> v;

    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a >> b;
        v.push_back(Meet(a, b));
    }
    sort(v.begin(), v.end());
    last_time = -1 ;

    cout << endl;
    for (i = 0; i < n; i++)
    {
        cout << v[i].time_to_start << " " << v[i].time_to_end << endl;
    }

    for (i = 0; i < v.size(); i++)
    {
        if (v[i].time_to_start >= last_time) {
            cnt++;
            last_time = v[i].time_to_end;
        }
    }
    cout << cnt << endl;
    return 0;
}