package com.example.inflearn.chapter3;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class SubSet {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int[] arr = new int[n + 1];
        DFS(1, arr, n);
        // 목표 : 1부터 n 까지의 원소를 갖는 집합의 모든 부분집합을 구하기.
        // 집합은 요소가 되나 마냐 이 두가지 선택지밖에 없음.
        // 이진 트리로 구성할 수 있음.
    }

    public static void DFS(int L, int[] arr, int max) {
        if (L == max + 1) {
            for (int i = 1; i <= max; i++) {
                if (arr[i] != 0) {
                    System.out.print(i + " ");
                }
            }
            System.out.println();
            return;
        } else {
            arr[L] = 1;
            DFS(L + 1, arr, max);
            arr[L] = 0;
            DFS(L + 1, arr, max);
        }
    }

}

