package com.example.inflearn.chapter2;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class InversionSequence {
    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Integer num = Integer.valueOf(br.readLine());
        int[] tmpArr = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
        int[] res = new int[101];
        int j =0;
        for (int re : res) {
            re = 0;
        }

        j = 1;
        int[] inversionSequence = new int[tmpArr.length + 1];
        for (int i : tmpArr) {
            inversionSequence[j++] = i;
        }

        // inversion sequence 를 하나씩 뒤에서부터
        for (int i = num; i >= 1; i--) {
            for (j = i; j < i + inversionSequence[i]; j++) {
                if (i < res[j + 1]) {
                    res[j] = res[j + 1];
                }
            }
            res[j] = i;
        }
        for (int i = 1; i <= num; i++) {
            System.out.print(res[i] + " ");
        }
    }
}
