#include <queue>
#include <iostream>

using namespace std;

queue<int> q;

int main(void)
{
    q.push(5);
    q.push(3);
    q.push(10);

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}