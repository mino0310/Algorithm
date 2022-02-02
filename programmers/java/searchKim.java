package com.example.codingTest;

import java.util.HashMap;
import java.util.Map;

public class searchKim {

    public static void main(String[] args) {

    }

    public String solution(String[] seoul) {

        int tmp = 0;
        for (String s : seoul) {
            if (s.equals("Kim")) {
                break ;
            }
            tmp++;
        }

        String answer = "김서방은 " +  tmp + "에 있다";
        return answer;
    }
}
