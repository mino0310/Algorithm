#include <iostream>
#define MAX_SIZE 9
#define SWAP(x, y, temp) ( (temp) = (x), (x)=(y), (y)=(temp) )

using namespace std;

// 1. 피벗을 기준으로 2개의 부분 리스트로 나눈다.
// 2. 피벗보다 작은 값은 모두 왼쪽 리스트로, 큰 값은 오른쪽 부분 리스트로 옮긴다.
// 2개의 비균등 배열 list[left ... pivot-1] 와 list[pivot+1...right] 의 합병과정

// 정수 배열이 피봇을 기준으로 왼쪽은 피봇보다 작은 값으로, 오른쪽은 피봇 값보다 큰 값으로 옮겨지는 과정. 대소관계를 기준으로 옮길 뿐이므로 정렬은 이뤄지지 않는다. 반환값은 피벗으로 잡은 값이 정렬된 위치다.
int partition(int list[], int left, int right) {
    int pivot, temp;
    int low, high;

    low = left;
    high = right + 1;
    pivot = list[left]; // 정렬할 리스트의 가장 왼쪽 데이터를 피벗으로 선택 (임의의 값을 피벗으로 선택)
    
    /* low 와 high 가 교차할 때까지 반복 (low < high) */
    do {
        /* list[low] 가 피벗보다 작으면 계속 low를 증가 */
        do {
            low++; // low 는 left + 1에서 시작
        } while (low <= right && list[low] < pivot);
        
        /* list[high] 가 피벗보다 크면 계속 high를 감소 */
        do {
            high--;
        } while (high >= left && list[high] > pivot);

        // 만약 low와 high 가 교차하지 않았으면 list[low]를 list[high] 와 교환
        if (low < high) {
            SWAP(list[low], list[high], temp);
        }
    } while (low < high);

    // low 와 high 가 교차했으면 반복문을 빠져나와 list[left]와 list[high] 를 교환
    SWAP(list[left], list[high], temp);

    // 정렬된 피벗의 위치인 high를 반환
    return high;
}

// 퀵 정렬. 위의 피봇 값을 제 자리에 위치 시키고 배열을 분할하는 과정을 재귀적으로 호출.
void quick_sort(int list[], int left, int right) {
    if (left < right) { // 퀵 소트는 분할 리스트가 0개 혹은 1일 경우 종료된다. 그를 제외한 경우일 경우 이 조건을 만족한다. 
        int pivot_idx = partition(list, left, right); // 피봇을 기준으로 좌우로 분할리스트를 만든다. 

        quick_sort(list, left, pivot_idx - 1); // 나뉜 좌측에 퀵 소트를 재귀적으로 호출한다.
        quick_sort(list, pivot_idx + 1, right); // 나뉜 우측에 퀵 소트를 재귀적으로 호출한다.
    }
}


int main(void)
{
    int i;
    int n = MAX_SIZE;
    int list[] = {5, 3, 8, 4, 9, 1, 6, 2, 7};

    quick_sort(list, 0, n - 1);

    for (i = 0; i < n; i++) {
        cout << list[i] << " ";
    }
    return 0;
}