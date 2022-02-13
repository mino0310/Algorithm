package com.example.inflearn.chapter2;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;

public class SpecialSort {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        br.readLine();

        String inputString = br.readLine();
        List<Integer> positive = Arrays.stream(inputString.split(" ")).map(Integer::valueOf).filter(i -> i > 0).collect(Collectors.toList());
        List<Integer> negative = Arrays.stream(inputString.split(" ")).map(Integer::valueOf).filter(i -> i < 0).collect(Collectors.toList());
        List<Integer> list = new ArrayList<>();

        for (Integer integer : negative) {
            list.add(integer);
        }
        for (Integer integer : positive) {
            list.add(integer);
        }

        for (Integer integer : list) {
            System.out.print(integer + " ");
        }


    }

}
