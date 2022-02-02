package com.example.inflearn;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;
import java.util.StringTokenizer;

public class GawiBawiBo {

    public static void main(String[] args) throws IOException {

        List<String> list = new ArrayList<>();
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int student = Integer.parseInt(br.readLine());

        StringTokenizer st1 = new StringTokenizer(br.readLine());
        StringTokenizer st2 = new StringTokenizer(br.readLine());

        for (int i = 0; i < student; i++) {
            int a = Integer.parseInt(st1.nextToken());
            int b = Integer.parseInt(st2.nextToken());
            if (Math.abs(a - b) == 1) {
                if (a > b) {
                    list.add("A");
                } else {
                    list.add("B");
                }
            } else if (a - b != 0) {
                if (a > b) {
                    list.add("B");
                } else {
                    list.add("A");
                }
            } else {
                list.add("D");
            }
        }
        for (String s : list) {
            System.out.println(s);
        }
    }
}
