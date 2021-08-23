#include<iostream>

int time_per_button[3] = {300, 60, 10};
int cnt_per_button[3];

int main(void)
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int time, i;

    std::cin >> time;
    i = 0;

    while (time)
    {
        if (time < 10) {
            std::cout << -1 << std::endl;
            return 0;
        }
        cnt_per_button[i] = time / time_per_button[i];
        time %= time_per_button[i++]; 
    }
    for (i = 0; i < 3; i++)
    {
        std::cout << cnt_per_button[i] << " ";
    }
    return 0;
}