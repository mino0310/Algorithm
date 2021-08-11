#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>

int search_cache(int value, int arr[], int size);

int main(void)
{
    int size, work_cnt, work_no, i, j, tmp;

    scanf("%d %d", &size, &work_cnt);
    
    std::vector<int> cache(size);
    for (i = 0; i < size; i++) {
        scanf("%d", &cache[i]);
    }
    for (j = size; j < work_cnt; j++) {
        scanf("%d", &work_no);
        if (search_cache(work_no, cache, size)) {
            
        }
        else {

        }
    }

    return 0;
}

int search_cache(int value, int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        if (value == arr[i]) {
            return i;
        }
    }
    return 0;
}