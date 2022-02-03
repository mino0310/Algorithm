package com.example.programmers;

import java.util.Arrays;
import java.util.Comparator;

public class sortDesc {

    public long solution(long n) {
        StringBuilder sb = new StringBuilder();
        String s = String.valueOf(n);
        String[] split = s.split("");
        Arrays.stream(split).map(Integer::valueOf).sorted(Comparator.reverseOrder()).forEach(i -> sb.append(String.valueOf(i)));
        return Long.valueOf(sb.toString());
    }
}
