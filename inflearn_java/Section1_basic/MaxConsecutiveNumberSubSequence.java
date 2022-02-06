package com.example.inflearn.chapter1;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class MaxConsecutiveNumberSubSequence {

    public static void main(String[] args) throws IOException {
        int cnt = 1;
        int max = 0;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Integer totalLen = Integer.valueOf(br.readLine());
        StringTokenizer st = new StringTokenizer(br.readLine());

        Integer frontVal = Integer.valueOf(st.nextToken());


        while (st.hasMoreTokens()) {
            Integer val = Integer.valueOf(st.nextToken());
            cnt = frontVal <= val ? cnt + 1 : 0;
            if (cnt > max){ max = cnt;}
            frontVal = val;

        }
        max++;
        System.out.println("max = " + max);


    }

    // 앞 값 <= 뒷 값 - 모든 걸 숫자와 숫자의 관계로 이해해라 문장 말고





}
