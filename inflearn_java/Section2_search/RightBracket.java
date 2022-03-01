package com.example.inflearn.chapter2;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;

public class RightBracket {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String input = br.readLine();

        Stack<String> stack = new Stack<>();

        String[] split = input.split("");
        for (String s : split) {
            if (s.equals("(")) {
                stack.push(s);
            } else {
                if (!stack.isEmpty()) {
                    stack.pop();
                } else {
                    System.out.println("NO");
                    return ;
                }
            }
        }
        if (stack.isEmpty()) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}
