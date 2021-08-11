#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>

int binary_search(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] < target) {
            low = mid + 1;
        }
        else if (arr[mid] > target) {
            high = mid  - 1;
        }
        else {
            return (mid);
        }
    }
    return -1;
}
