package com.example.inflearn;

public class StrangeChar {

    public static void main(String[] args) {
        String try_hello_world = solution("try    Hello     world");
    }

    public static String solution(String s) {
        String answer = "";

        String[] split = s.split("");
        int cnt = 0;
        for (String s1 : split) {
            cnt = s1.equals(" ") ? 0 : cnt + 1;
            if (cnt % 2 != 0) {
                answer += s1.toUpperCase();
            } else {
                answer += s1.toLowerCase();
            }
        }
        return answer;
    }
}
