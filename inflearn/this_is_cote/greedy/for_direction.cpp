#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
    int n, i, x, y,  j;

    char move[4] = {'L', 'R', 'U', 'D'};
    int dx[4] = {0, 0, -1, 1};
    int dy[4] = {-1, 1, 0, 0};
    string directions;
    x = y = 1;

    cin >> n;
    cin.ignore();
    getline(cin, directions);

    for  (i  =  0; i < directions.size(); i++) {
        char direction = directions[i];
        for (j = 0; j < 4; j++)
        {
            if (direction == move[j]) {
                if (y+dy[j] <= n && y+dy[j] >= 1)
                    y += dy[j];
                if (x+dx[j] <= n && x+dx[j] >= 1)
                    x += dx[j];
            }
        }
    }

    cout << x <<  " " << y << endl;


    return 0;
}