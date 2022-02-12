package com.example.inflearn.chapter2;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.stream.Collectors;

public class SelectionSort {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int num = Integer.parseInt(br.readLine());
        String[] s = br.readLine().split(" ");
        // 기본형의 경우엔 toArray로 배열을 만들 수 있고
        // 래퍼클래스의 경우에는 .collect()를 쓰고 매개변수로 Collectors를 써야함
        int[] ints = Arrays.stream(s).mapToInt(Integer::parseInt).toArray();

        int min;
        int idx = -1;

        for (int i = 0; i < ints.length; i++) {
            min = 2147000000;
            for (int j = i; j < ints.length; j++) {
                // 가장 작은 값을 찾으면 됨
                if (min > ints[j]) {
                    min = ints[j];
                    idx = j;
                }
            }
            int tmp = ints[i];
            ints[i] = min;
            ints[idx] = tmp;
        }

        for (int anInt : ints) {
            System.out.println(anInt);
        }
    }
}
