package com.example.programmers;

public class discriminateIntegerSquareRoot {

    public long solution(long n) {
        long answer = 0;
        long sqrt = (long) Math.sqrt(n);
        double res = Math.pow(sqrt, 2);
        if (res == n) {
            answer = (long) Math.pow(sqrt+1, 2);
        } else {
            answer = -1;
        }
        return answer;
    }


}
