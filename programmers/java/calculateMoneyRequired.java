package com.example.codingTest;

public class calculateMoneyRequired {

    public static void main(String[] args) {

        long solution = solution(3, 20, 4);
        System.out.println("solution = " + solution);
    }

    public static long solution(int price, int money, int count) {
        long answer = 0;
        long totalCost = (long)(count * price * (count+1)) / 2;
        if (money > totalCost) {
            answer = 0;
        } else {
            answer = totalCost - money;
        }
        return answer;
    }

}
