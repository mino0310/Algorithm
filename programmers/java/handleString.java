package com.example.codingTest;

import java.util.Comparator;

public class handleString {

    public static void main(String[] args) {

        boolean a1234 = solution("1234");
        System.out.println("a1234 = " + a1234);
    }

    public static boolean solution(String s) {
        boolean answer = true;

        int length = s.length();

        String allStr = s.replaceAll("[^0-9]", "");
        String allNum = s.replaceAll("[^a-z]", "");

        if ((allNum.length() == 0) && (length == 4 || length == 6)) {
            return true;
        }

        return false;
    }
}
