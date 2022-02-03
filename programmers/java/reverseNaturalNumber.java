package com.example.programmers;

import java.util.ArrayList;
import java.util.List;

public class reverseNaturalNumber {

    public static int[] solution(long n) {
        List<Long> list = new ArrayList<>();
        while (n != 0) {
            list.add(n % 10);
            n /= 10;
        }
        int[] ints = list.stream().mapToInt(Long::intValue).toArray();
        return ints;
    }
}
