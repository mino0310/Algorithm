package com.example.inflearn.chapter2;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Collections;
import java.util.stream.Collectors;

public class ScoreOfThird {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int num = Integer.parseInt(br.readLine());
        Integer[] arr = Arrays.stream(br.readLine().split(" ")).map(Integer::valueOf).toArray(Integer[]::new);
        Arrays.sort(arr, Collections.reverseOrder());

        for (Integer integer : arr) {
            System.out.println("integer = " + integer);
        }
//        int max, idx = -1;
//
//        for (int i = 0; i < arr.length; i++) {
//            max = 0;
//            for (int j = i; j < arr.length; j++) {
//                if (max < arr[j]) {
//                    idx = j;
//                    max = arr[j];
//                }
//            }
//            int tmp = arr[i];
//            arr[i] = max;
//            arr[idx] = tmp;
//        }
        int cnt = 1;
        int tmp = arr[0];
        int res = 0;
        for (int i = 1; i < arr.length; i++) {
            if (cnt == 3) {
                res = tmp;
                break;
            }
            if (arr[i] != tmp) cnt++;
            tmp = arr[i];
        }
        System.out.println(res);
    }
}
