#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

bool compare(string str1, string str2)
{
    return str1.length() > str2.length();
}

int num[10];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, i;
    string tmp;
    vector<string> v;

    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> tmp;
    
        v.push_back(tmp);
    }
    sort(v.begin(), v.end(), compare);


    cout << endl;
    
    for (i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    return 0;

}

// 문자를 숫자로 일대일 대응 시키고 두 숫자의 최대값을 구하면 된다.
// 최대값 문제고, 가장 높은 자리의 숫자를 결정하고 그 다음 자리수를 결정하면 되는 문제네
// 그러니 그리디 알고리즘을 사용해보자. 
// 문자열을 입력 받고, 일단 길이가 긴 것을 파악한다. 길이 순으로 정렬해서 하면 된다.
// 일단 가장 큰 문자열을 고르자. 그리고 그 글자의 앞 글자를 9에 대응시키자.
// 예를 들어서 ABCD, FBD 라고 해보자. 그러면 A = 9가 된다. 그다음 2번째 숫자를 어떻게 정해야하나?
// B를 8로 하자. 그다음 C를 7로하자. 그다음 D를 6으로 하자 그러면 9876 이되고
// F는 5로 해야겠지. 그다음 8이고 6. 586 이 된다. 
// 다른 경우를 생각해보자 A = 9까지는 똑같다. 그러면 
// 길이가 가장 긴 것을 기준으로 해서 그 가장 높은 자리수를 9로 해야 한다.
// 알파벳을 숫자와 대응시켜야 한다. 가장 좋은 방법은 아스키 코드를 활용하는 방법이지

