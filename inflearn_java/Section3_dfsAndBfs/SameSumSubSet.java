package com.example.inflearn.chapter3;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;


public class SameSumSubSet {

    static int[] check = new int[20];
    static int[] arr;
    static boolean flag = false;

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int inputNumber = Integer.parseInt(br.readLine());
        arr = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
        int sum = Arrays.stream(arr).sum();
        DFS(0, inputNumber, sum);
        if (flag) {
            System.out.println("YES");
        } else
            System.out.println("NO");
    }

    public static void DFS(int nowIdx, int inputNumber, int sum) {
        if (nowIdx == inputNumber) {
            int tmp_a, tmp_b;
            tmp_a = tmp_b = 0;
            for (int i = 0; i < inputNumber; i++) {
                if (check[i] == 1)
                    tmp_a += arr[i];
                else
                    tmp_b += arr[i];
            }
            if (tmp_a == tmp_b) {
                flag = true;
            }
            return;
        } else {
            check[nowIdx] = 1;
            DFS(nowIdx + 1, inputNumber, sum);
            check[nowIdx] = 0;
            DFS(nowIdx + 1, inputNumber, sum);
        }
    }
}
