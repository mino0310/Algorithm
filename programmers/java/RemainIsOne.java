package com.example.codingTest;

public class RemainIsOne {

    public static void main(String[] args) {

    }

    public int solution(int n) {
        int answer = 0;

        for (int i = 1; i < n; i++) {
            if (n % i == 1) {
                answer = i;
                break;
            }
        }
        return answer;
    }
}
