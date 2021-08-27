#include <iostream>
#include <vector>


using namespace std;

int main(void)
{
    vector<int> v(5, 1);

    int i;
    cout << v.size() << endl;
    v[100] = 3;

    cout << v.capacity() << endl;

    cout << v.size() << endl;
    return 0;
}