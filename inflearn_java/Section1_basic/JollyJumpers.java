package com.example.inflearn.chapter1;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.StringTokenizer;
import java.util.stream.Collectors;
import java.util.stream.Stream;

public class JollyJumpers {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Integer num = Integer.valueOf(br.readLine());
        StringTokenizer st = new StringTokenizer(br.readLine());
        List<Integer> list = new ArrayList<>();

        Integer frontVal = Integer.valueOf(st.nextToken());

        while (st.hasMoreTokens()) {
            Integer val = Integer.valueOf(st.nextToken());
            int res = frontVal - val;
            list.add(Math.abs(res));
            frontVal = val;
        }
        String answer = list.stream().filter(i -> i >= 1 && i <= num - 1).distinct().count() == num - 1 ? "YES" : "NO";
        System.out.println(answer);

    }


}
