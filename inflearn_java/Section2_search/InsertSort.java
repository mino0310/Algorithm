package com.example.inflearn.chapter2;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class InsertSort {
    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        br.readLine();
        int[] array = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();

        for (int i = 1; i < array.length; i++) {
            for (int j = i; j > 0; j--) {
                if (array[j - 1] > array[j]) {
                    int tmp = array[j-1];
                    array[j-1] = array[j];
                    array[j] = tmp;
                }
            }
        }

        for (int i = 0; i < array.length; i++) {
            System.out.print(array[i] + " ");
        }

        // 3 5 2 1 4

        // 3 . 5 2 1 4
        // 3 5 . 2 1 4
        //
        // 삽입 정렬

        // 정렬 안 된 부분에서 정렬 된 부분으로 삽입해가며 정렬하는 것

        // 첫번째거를 이미 정렬되어있다고 생각
        // 두번쨰 부터 탐색 시작
        // 두번째거 pick
        // 그 다음 정렬된 부분과 비교해서 제 자리 찾아넣으면 됨


    }


}
