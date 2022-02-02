package com.example.inflearn;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;

public class ComeOnAngry {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int studentCount = Integer.parseInt(br.readLine());
        String[] cm = br.readLine().split(" ");
        Stack<String> stack = new Stack<>();
        for (String s : cm) {
            stack.push(s);
        }
        int max = Integer.parseInt(stack.pop());
        int cnt = 0;
        while (!stack.isEmpty()) {
            int val = Integer.parseInt(stack.pop());
            if (val > max) {
                cnt++;
                max = val;
            }
        }

        System.out.println(cnt);


    }
}
