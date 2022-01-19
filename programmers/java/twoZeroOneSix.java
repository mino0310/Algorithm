package com.example.codingTest;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.time.LocalDateTime;
import java.util.StringTokenizer;

public class twoZeroOneSix {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int a = Integer.parseInt(st.nextToken());
        int b = Integer.parseInt(st.nextToken());

        String solution = solution(a, b);
        System.out.println("solution = " + solution);
    }

    public static String solution(int a, int b) {
        String answer = "";
        String[] days = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
        Integer[] maxDays = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int firstDayIdx = 5;
        int distanceDay = -1;

        for (int i = 1; i < a; i++) {
            distanceDay += maxDays[i];
        }
        distanceDay += b;
        return days[(firstDayIdx + distanceDay) % 7];
    }
}
