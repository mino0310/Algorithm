package com.example.inflearn.chapter1;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Ranking {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Integer num = Integer.valueOf(br.readLine());
        String[] s = br.readLine().split(" ");
        Integer[] rank = new Integer[num];

        for (int i = 0; i < num; i++) {
            rank[i] = 1;
        }

        for (int i = 0; i < num; i++) {
            for (int j = 0; j < num; j++) {
                if (Integer.valueOf(s[i]) < Integer.valueOf(s[j])) {
                    rank[i]++;
                }
            }
        }

        // think
        // 문장으로 이해하지말고 숫자로 이해해
        // 현재 값보다 큰 값의 수 = 석차 // 같은 값이 있을 경우 그 개수만큼++

        // 큰 숫자 순으로 정렬
        // 전순회
        // 일단 rank 매김 그다음에 같은 거 회수 체크
        // 그 담 숫자다른 거 의 rank 는 기존 rank + 같은 거 개수

        for (int i = 0; i < num; i++) {
            System.out.println("rank[i] = " + rank[i]);
        }



    }


}
