package com.example.programmers;

import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;

public class deleteSmallNumber {


    public int[] solution(int[] arr) {
        List<Integer> list = Arrays.stream(arr).boxed().collect(Collectors.toList());

        if (arr.length <= 1) {
            return new int[]{-1};
        } else {
            Integer min = Arrays.stream(arr).boxed().min(Integer::compare).get();
            list.remove(min);
        }
        return list.stream().mapToInt(i -> i).toArray();
    }
}
