package com.example.inflearn.chapter2;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class MultiTasking {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int totalWork = Integer.parseInt(br.readLine());
        int[] workArr = new int[totalWork + 1];
        int now, next, idx, curTime = 0;
        int res;

        now = next = 0;
        idx = 0;
        List<Integer> completed = new ArrayList<>();

        // 작업 초기화
        for (int i = 1; i <= totalWork; i++) {
            workArr[i] = Integer.parseInt(br.readLine());
        }

        // 정전 시간 입력
        int blackTime = Integer.parseInt(br.readLine());
        int sum = Arrays.stream(workArr).sum();
        if (sum == blackTime) {
            System.out.println(-1);
            return ;
        }

        while (curTime <= blackTime) {
            idx++;
            // 원형 구조를 갖도록
            if (idx > totalWork) {
                idx = 1;
            }
            if (workArr[idx] == 0) {
                continue;
            }
            workArr[idx]--;
            curTime++;
        }
        res = idx> totalWork ? (idx) % totalWork :idx;
        System.out.println(res);
    }

    static boolean checkArr(int[] arr, int size) {
        for (int i = 1; i <= size; i++) {
            if (arr[i] != 0) {
                return false;
            }
        }
        return true;
    }
    // 작업을 끝내면 끝났다고 리스트에 넣자.


    // 작업 = 자연수 배열
    // 구조 = 원형 구조 (처음에 인덱스 구조 잡아줘야 함)


}
