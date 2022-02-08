package com.example.inflearn.chapter1;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.stream.IntStream;

public class NFactorial {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Integer input = Integer.valueOf(br.readLine());

        int[] output = new int[input + 1];

        int start = input;
        while (input != 0) {
            int i = 2;
            int tmp = input;
            while (i <= tmp) {
                while (isPrime(i) && tmp % i == 0) {
                    output[i]++;
                    tmp /= i;
                }
                i++;
            }
            input--;
        }

        Arrays.stream(output).filter(i -> i != 0).forEach(i -> System.out.print(i + " "));

    }
    public static boolean isPrime(int n) {

        if (n <= 1) return false;

        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
}

