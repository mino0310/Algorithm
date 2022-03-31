package com.example.inflearn.chapter3;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class MakeSpecificNumber {

    static int n, m, totalSum, cnt = 0;
    static int[] res = new int[101];
    static boolean flag = false;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int[] firstArr = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
        n = firstArr[0];
        m = firstArr[1];
        int[] secondArr = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
        for (int i = 0; i < secondArr.length; i++) {
            res[i] = secondArr[i];
        }
        totalSum = Arrays.stream(secondArr).sum();
        DFS(0, 0);
        if (cnt == 0) System.out.println(-1);
        else System.out.println(cnt);

    }

    static void DFS(int L, int nowSum) {
        if (L == n) {
            if (nowSum == m) {
                cnt++;
            }
            return;
        } else {
            // 들어가기 전 행동 = 덧셈
            DFS(L + 1, nowSum + res[L]);
            // 들어갔다 나온 뒤 행동 = 따로 없음
            // 다시 들어가기 전 행동 = 그대로
            DFS(L + 1, nowSum);
            // 들어갔다 나온 뒤 행동 = 따로 없음
            // 다시 들어가기 전 행동 = 마이너스
            DFS(L + 1, nowSum - res[L]);
        }
    }
}
