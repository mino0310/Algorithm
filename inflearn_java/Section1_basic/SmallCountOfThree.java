package com.example.inflearn.chapter1;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class SmallCountOfThree {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        int num = Integer.parseInt(br.readLine());

        for (int i = 1; i <= num; i++) {
            sb.append(String.valueOf(i));
        }
        String[] split = sb.toString().split("");
        long count = Arrays.stream(split).filter(i -> i.equals("3")).count();
        System.out.println("count = " + count);


    }
    
    // 힌트 연속된 숫자
    // 3의 개수
    
    //
}
