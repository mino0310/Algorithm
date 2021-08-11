#include <iostream>

int adj_matrix[21][21];

using namespace std;

int main(void)
{
    int n, m, i, j, row, col, edge;
    row = col = edge = 0;

    cin >> n >> m;

    for (i = 1; i <= m; i++) 
    {
        cin >> row >> col >> edge;
        adj_matrix[row][col] = edge;
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++) {
            cout << adj_matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}