package com.example.inflearn.chapter2;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Stack;

public class TrainService {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Integer number = Integer.valueOf(br.readLine());
        int[] trains = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();

        Queue<Integer> q = new LinkedList<>();
        Stack<Integer> s = new Stack<>();
        StringBuilder sb = new StringBuilder();

        for (int train : trains) {
            q.add(train);
        }

        int trainNumber = 1;

        // 무한 반복
        // 하나 입력 받음
        // 스택의 위가 들어가야할 숫자가 아닐 때까지 out + 숫자 증가
        // 스택의 위가 무관한 숫자라면 다시 입력받는 곳으로

        while (true) {
            Integer train = q.poll();
            s.push(train);
            sb.append("P");
            while (s.peek() == trainNumber) {
                Integer top = s.pop();
                sb.append("O");
                trainNumber++;
                if (s.isEmpty()) {
                    break;
                }
            }
            if (q.isEmpty()) {
                break ;
            }
        }
        if (!s.isEmpty()) {
            System.out.println("impossible");
        } else {
            System.out.println(sb);
        }

        // 무조건 stack 에 입력 후 pop해야 함.
    }
}
