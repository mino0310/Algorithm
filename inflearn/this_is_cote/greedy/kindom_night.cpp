#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int cnt = 0, i, x, y;
    char in[2];
    cin >> in;

    char dx[8] = {-2, -2, -1, 1, 2, 2, 1, -1};
    char dy[8] = {1, -1, -2, -2, -1, 1, 2, 2};

    i = 0;
    int row_num, col_num;

    row_num = in[1] - '0';
    col_num = in[0] - 'a' + 1;

    while (i < 8)
    {
        x = col_num + dx[i];
        y = row_num + dy[i];
        if ((x >= 1 && x <= 8) && (y >= 1 && y <= 8)) cnt++;
        i++;
    }

    cout << cnt;
    
    return  0;
}