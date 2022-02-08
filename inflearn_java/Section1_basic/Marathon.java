package com.example.inflearn.chapter1;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;
import java.util.StringTokenizer;

public class Marathon {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        Integer marathoner = Integer.valueOf(br.readLine());
        String[] input = br.readLine().split(" ");
        List<Integer> ranks = new ArrayList<>();

        for (int i = 0; i < input.length; i++) {
            int tmpRank = i + 1;
            for (int j = 0; j < i; j++) {
                if (Integer.parseInt(input[i]) > Integer.parseInt(input[j])) {
                    tmpRank--;
                }
            }
            ranks.add(tmpRank);
        }
        ranks.forEach(i -> System.out.print(i + " "));


    }

    // 숫자로 이해해라 문장으로 이해하지마
    // 예를 들어 앞지르다 로 이해하지말고 두 값이 교체된다. 이렇게 이해하라고. 추상수준을 낮춰
    // 내 실력 < 앞 그룹의 실력 : 유지
    // 내 실력 > 앞 그룹의 실력 : 교체



}
