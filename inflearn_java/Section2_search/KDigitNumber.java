package com.example.inflearn.chapter2;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class KDigitNumber {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int[] input = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
        int number = input[0];
        int k = input[1];

        String res = DigitChanger.change(number, k);
        System.out.println(res);


    }

    static class DigitChanger {

        private static final String[] digits = {"01", "01234", "01234567", "0123456789ABCDEF"};

//        private static final String TWO = "01";
//        private static final String FIVE = "01234";
//        private static final String EIGHT = "01234567";
//        private static final String SIXTEEN = "0123456789ABCDEF";
//
        static String change(int num, int digit) {
            StringBuilder tmp = new StringBuilder();
            int r = 0;
            int q = 0;
            String supportDigit = isSupport(digit);
            while (num != 0) {
                tmp.append(supportDigit.charAt(num % digit));
                num /= digit;
            }
            return tmp.reverse().toString();
        }

        static String isSupport(int digit) {
            for (String s : digits) {
                if (s.length() == digit) {
                    return s;
                }
            }
            return "";
        }
    }
}
