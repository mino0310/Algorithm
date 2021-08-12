void selection_sort(int arr[], int arr_num) {
    int min, min_index = -1, i, j;
    for (i = 0; i < arr_num; i++) {
        min = 2147483647;
        for (j = i; j < arr_num; j++) {
            if (min > arr[j]) {
                min = arr[j];
                min_index = j;
            }
        }
        int tmp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = tmp;
    }
}