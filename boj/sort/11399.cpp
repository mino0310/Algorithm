#include <iostream>
#include <vector>

using namespace std;

struct draw {
    int order, time_taken;

    draw(int a, int b)
    {
        order = a;
        time_taken = b;
    }
    bool operator<(const draw& tmp)const {
        return time_taken < tmp.time_taken;
    }
};

int main(void)
{
    vector<draw> v;

    int n, i, tmp, sum = 0;
    int res[1001], output[1001], plz = 0;

    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> tmp;
        v.push_back(draw(i, tmp));   
    }
    sort(v.begin(), v.end());
    for (i = 0; i < n; i++)
    {
        sum += v[i].time_taken;
        output[i] = sum;
    }
    for (i = 0; i < n; i++)
    {
        plz += output[i];
    }

    cout << plz << endl;
    return 0;
}


// #include <iostream>
// #include <queue>
// #include <vector>


// using namespace std;

// int res[1001], time_per_human[1001], check[1001], n, min_value = 2147483647;
// int output[1001];
// void permutation(int L)
// {
//     if (L == n + 1){
//         int sum = 0;
//         for (int k = 1; k <= n; k++)
//         {
//             sum += time_per_human[res[k]];
//             output[k] = sum;
//         }
//         sum = 0;
//         for (int k = 1; k <= n; k++)
//         {
//             sum += output[k];
//         }
//         if (min_value > sum) {
//             min_value = sum;
//         }
//         return ;
//     }
//     else {
//         for (int j = 1; j <= n; j++)
//         {
//             if (check[j] == 0) {
//                 check[j] = 1;
//                 res[L] = j;
//                 permutation(L + 1);
//                 check[j] = 0;
//             }
//         }
//     }
// }

// int main(void){

//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> time_per_human[i];
//     }
//     permutation(1);
//     cout << min_value << endl;
//     return 0;
// }