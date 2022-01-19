package com.example.codingTest;

public class selectMiddleChar {

    public static void main(String[] args) {

        String abcde = solution("qwer");
        System.out.println("abcde = " + abcde);

    }

    public static String solution(String s) {
        return s.substring((s.length() - 1) / 2, s.length() / 2 + 1);
    }
}
