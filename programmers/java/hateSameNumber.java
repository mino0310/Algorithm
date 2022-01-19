package com.example.codingTest;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Stack;

public class hateSameNumber {

    public static void main(String[] args) {

        int[] solution = solution(new int[]{1, 1, 3, 3, 0, 1, 1});
        for (int i : solution) {
            System.out.print(i + " ");
        }

        List<Integer> test = new ArrayList<>();


    }

    public static int[] solution(int []arr) {
        List<Integer> list = new ArrayList<>();
        int beforeNumber = arr[0];
        list.add(beforeNumber);
        for (int i = 1; i < arr.length; i++) {
            if (beforeNumber != arr[i]) {
                beforeNumber = arr[i];
                list.add(arr[i]);
            }
        }
        int[] answer = new int[list.size()];
        for (int i = 0; i < list.size(); i++) {
            answer[i] = list.get(i);
        }
        return list.stream().mapToInt(Integer::intValue).toArray();
    }
}
