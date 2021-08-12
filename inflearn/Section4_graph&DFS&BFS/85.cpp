#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int num[15], n, oper_num[5];
int maxValue = -2147000000, minValue = 2147000000;

void DFS(int L, int sum)
{
    if (L == n)
    {
        if (sum > maxValue) maxValue = sum;
        if (sum < minValue) minValue = sum;
        return ;
    }
    else
    {
        // 앞에 사용된 연산을 안다는 조건 하에서 .. 이를 어떻게 구현하지? 사용된 연산의 횟수를 차감시키지 뭐
        if (oper_num[1] > 0) {
            oper_num[1]--;
            DFS(L + 1, sum + num[L + 1]);
            oper_num[1]++;
        }
        if (oper_num[2] > 0) {
            oper_num[2]--;
            DFS(L + 1, sum - num[L + 1]);
            oper_num[2]++;
        }
        if (oper_num[3] > 0) {
            oper_num[3]--;
            DFS(L + 1, sum * num[L + 1]);
            oper_num[3]++;
        }
        if (oper_num[4] > 0){
            oper_num[4]--;
            DFS(L + 1, sum / num[L + 1]);
            oper_num[4]++;
        } 
    }
}


int main(void)
{
    int i;
    cin >> n;
    
    for (i = 1; i <= n; i++)
        cin >> num[i];
    for (i = 1; i <= 4; i++)
        cin >> oper_num[i];
    DFS(1, num[1]);
    cout << maxValue << endl << minValue << endl;
    return 0;
}