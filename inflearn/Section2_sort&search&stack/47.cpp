#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

int map[52][52];

int main(void)
{
    int map_size, i, j, cnt = 0;
    scanf("%d", &map_size);

    for (i = 1; i <= map_size; i++) {
        for (j = 1; j <= map_size; j++) {
            scanf("%d", &map[i][j]);
        }
    }
    for (i = 1; i <= map_size; i++) {
        for (j = 1; j <= map_size; j++) {
            if((map[i][j] > map[i-1][j]) && (map[i][j] > map[i + 1][j])
            && (map[i][j] > map[i][j - 1]) && (map[i][j] > map[i][j + 1])) {
                cnt++;
            }
        }
    }
    printf("%d", cnt); 
    return 0;
}