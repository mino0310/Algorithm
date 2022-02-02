package com.example.codingTest;

public class caesarCipher {

    public static void main(String[] args) {
        String ab = solution("a B z", 4);
        System.out.println(ab);
    }

    public static String solution(String s, int n) {
        String answer = "";
        char[] chars = s.toCharArray();
        StringBuilder sb = new StringBuilder();

        for (char aChar : chars) {
            // 공백이면 공백 처리
            if (aChar == 32) {
                sb.append(" ");
            } else if (aChar >= 'a' && aChar <= 'z'){ // 소문자
                // 소문자 값에서 위로 벗어나면
                if (aChar + n > 'z') {
                    n -= 26;
                }
                // 소문자 값에서 아래로 벗어나면
                else if (aChar + n < 'a') {
                    n += 26;
                }
                aChar += n;
                sb.append(String.valueOf(aChar));
            } else if (aChar >= 'A' && aChar <= 'Z') { // 대문자
                // 대문자 값에서 위로 벗어나면
                if (aChar + n > 'Z') {
                    n -= 26;
                }
                // 대문자 값에서 아래로 벗어나면
                else if (aChar + n < 'A') {
                    n += 26;
                }
                aChar += n;
                sb.append(String.valueOf(aChar));
            }
        }
        // 문자열로 만들어서 반환
        return sb.toString();
    }
}
