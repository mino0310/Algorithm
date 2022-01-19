package com.example.codingTest;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.stream.IntStream;

public class sortString {

    public static void main(String[] args) {
        String zbcdefg = solution("Zbcdefg");
        System.out.println("zbcdefg = " + zbcdefg);
    }
    public static String solution(String s) {
        String answer = "";

        char[] chars = s.toCharArray();
        Arrays.sort(chars);
        String s1 = new StringBuilder(new String(chars)).reverse().toString();

        return s1;
    }


}
