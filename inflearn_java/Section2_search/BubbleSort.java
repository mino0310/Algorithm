package com.example.inflearn.chapter2;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Comparator;

public class BubbleSort {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        br.readLine();
//        Integer[] s = Arrays.stream(br.readLine().split(" ")).map(Integer::valueOf).toArray(Integer[]::new);
//        Arrays.sort(s);
//        Arrays.stream(s).forEach(i -> System.out.print(i + " "));

        int[] s = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
        for (int i = 0; i < s.length; i++) {
            for (int j = 0; j < s.length - i - 1; j++) {
                if (s[j] > s[j + 1]) {
                    int tmp = s[j];
                    s[j] = s[j+1];
                    s[j+1] = tmp;
                }
            }
        }
        Arrays.stream(s).forEach(i -> System.out.print(i + " "));



    }
}
