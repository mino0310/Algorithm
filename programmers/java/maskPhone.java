package com.example.programmers;

public class maskPhone {


    public String solution(String phone_number) {
        String answer = "";
        int maskLen = phone_number.length() - 4;
        String masked = phone_number.substring(0, maskLen).replaceAll("[0-9]", "*");
        answer = masked + phone_number.substring(maskLen, phone_number.length());
        return answer;
    }
}
