package com.example.inflearn;

import java.util.ArrayList;
import java.util.List;

public class SumDivisor {

    public static void main(String[] args) {

        int s1 = solution(12);
        int s2 = solution(5);
        int s3 = solution(3);

        for (int i = 1; i <= 50; i++) {
            System.out.println(i + " =  " + solution(i));
        }

    }

    public static int solution(int n) {
        int answer = 0;
        List<Integer> list = new ArrayList<>();

        if (n < 2) return n;

        for (int i = 1; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                list.add(i);
                list.add(n / i);
            }
        }
        answer = list.stream().distinct().mapToInt(Integer::intValue).sum();

        return answer;
    }
}
