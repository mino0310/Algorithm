#include <iostream>
#include <utility>
#include <vector>

using namespace std;

vector<pair<int, int> > graph[3];

int main(void)
{
    graph[0].push_back({1, 7});
    graph[0].push_back({2, 5});
    graph[1].push_back({0, 7});
    graph[2].push_back({0, 5});

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < graph[i].size(); j++)
        {
            cout << '(' << graph[i][j].first << ',' << graph[i][j].second << ')' << ' ';
        }
        cout << "\n";
    }
    return 0;
}

// vector<int> vec[3];

// int main(void)
// {
//     vec[0].push_back(1);
//     vec[0].push_back(2);
//     vec[0].push_back(3);

//     vec[1].push_back(4);
//     vec[1].push_back(5);
//     vec[1].push_back(6);

//     vec[2].push_back(7);
//     vec[2].push_back(8);

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < vec[i].size(); j++)
//         {
//             cout << vec[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }