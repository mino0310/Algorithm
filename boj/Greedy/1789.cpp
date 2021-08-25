#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long s, i, sum, cnt;

    cin >> s;
    i = 1;
    while (1)
    {
        sum = i * (i + 1) / 2;
        if (sum >= s){
            cnt = i;
            break;
        }
        i++;
    }
    if (sum == s) {
        cout << cnt << endl;
    }
    else 
        cout << cnt - 1<< endl;
}


// N개를 더했떠니 S가 되었다. N의 최대값을 구하라. 

// 즉 가장 많은 숫자를 사용해서 자연수의 합 S를 구하고, 그 중 가장 최댓값을 출력하라는 뜻.
// 적은 숫자를 많이 사용하는 것이 좋겠네. 1부터 가야겠네. 1부터 하나씩 더해가면서 S가 될떄까지하고
// 그중 가장 높은 숫자를 출력


// 일단
// 1. S가 되는 숫자들의 배열을 구해야 한다. 이는 여럿이 있겠지.
// 2. 그 중에서도 가장 숫자를 많이 사용한 배열의 개수를 출력해야 한다.

// dp로 바텀업으로 풀면 안 되나.
