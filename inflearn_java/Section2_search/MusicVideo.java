package com.example.inflearn.chapter2;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class MusicVideo {

    public static void main(String[] args) throws IOException {

        int size = 1, cnt = 0, n, m, res, tmp = 0, idx = 0, lt, rt, mid;

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int[] first = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
        n = first[0];
        m = first[1];

        int[] songList = Arrays.stream(new StringBuilder(br.readLine()).reverse().toString().split(" ")).mapToInt(Integer::parseInt).toArray();

        int max = Arrays.stream(songList).max().getAsInt();

        lt = 0;
        res = 0;
        rt = 10_000;

        while (lt <= rt) {
            mid = (lt + rt) / 2; // 정 중앙 값 아무거나 잡기
            if (calculateBucket(songList, mid) <= m) {
                rt = mid - 1;
                res = mid;
            } else {
                lt = mid + 1;
            }
        }
        System.out.println(res);
    }

    public static int calculateBucket(int[] arr, int size) {
        int tmpSum = 0;
        int cnt = 1;
        for (int i = 0; i < arr.length; i++) {
            if (tmpSum + arr[i] > size) {
                tmpSum = arr[i];
                cnt++;
            } else {
                tmpSum += arr[i];
            }
        }
        return cnt;
    }

}
