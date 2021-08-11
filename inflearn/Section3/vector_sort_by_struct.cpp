#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Loc {
    int x, y, z;
    Loc(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    // 앞의 const 는 매개변수로 주소값을 받아도 함수 안에서 매개변수에 해당하는 값을 변경하는 것을 막음
    // 뒤의 const 는 상수멤버함수로의 선언으로, 구조체의 변수를 바꾸는 것을 막아준다.
    bool operator<(const Loc &b)const{
        if (x != b.x) return x < b.x;
        if (y != b.y) return y < b.y;
        if (z != b.z) return z < b.z;
    }
    // bool cmp(const Loc &b){
    //     if (x < b.x) return true;
    // }
};
// bool cmp(const Loc &b){
//     if (x < b.x) return true;
// }
int main() {
    vector<Loc> XY;
    XY.push_back(Loc(2, 3, 5));
    XY.push_back(Loc(3, 6, 7));
    XY.push_back(Loc(2, 3, 1));
    XY.push_back(Loc(5, 2, 3));
    XY.push_back(Loc(3, 1, 6));

    sort(XY.begin(), XY.end());
    for (auto pos : XY) cout << pos.x << " " << pos.y << " " << pos.z << endl;

    return 0;
}