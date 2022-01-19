package com.example.codingTest;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;

public class arrayDivide {
    public static void main(String[] args) {

        int[] solution = solution(new int[]{3, 2, 6}, 10);
        for (int i : solution) {
            System.out.print(i + " ");
        }
    }

    public static int[] solution(int[] arr, int divisor) {
        int[] answer = Arrays.stream(arr).filter(num -> num % divisor == 0).sorted().toArray();
        if (answer.length == 0) answer = new int[]{-1};
        return answer;
    }

}
